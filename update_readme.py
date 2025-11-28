#!/usr/bin/env python3
"""
Script to update the solved problems counter in README.md
based on the number of folders in the problems directory.
"""

import os
import re
from pathlib import Path

def count_problem_folders():
    """Count the number of problem folders in the problems directory."""
    problems_dir = Path(__file__).parent / "problems"
    
    if not problems_dir.exists():
        print(f"Error: {problems_dir} does not exist")
        return 0
    
    # Count folders only (not files)
    folders = [f for f in problems_dir.iterdir() if f.is_dir()]
    return len(folders)

def update_readme():
    """Update the README.md file with the current problem count."""
    readme_path = Path(__file__).parent / "README.md"
    
    if not readme_path.exists():
        print(f"Error: {readme_path} does not exist")
        return False
    
    # Count the problems
    problem_count = count_problem_folders()
    
    # Read the README file
    with open(readme_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # Pattern to match the status line
    pattern = r'This repository currently contains \d+ solved problems\.'
    replacement = f'This repository currently contains {problem_count} solved problems.'
    
    # Replace the count
    updated_content = re.sub(pattern, replacement, content)
    
    # Check if any change was made
    if updated_content == content:
        print(f"Warning: No pattern found to update. Current count may already be {problem_count}.")
    
    # Write back to the file
    with open(readme_path, 'w', encoding='utf-8') as f:
        f.write(updated_content)
    
    print(f"✓ README.md updated successfully!")
    print(f"  Found {problem_count} problem(s) in the problems directory.")
    return True

if __name__ == "__main__":
    update_readme()
