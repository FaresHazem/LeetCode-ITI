SELECT e.name as Employee
FROM Employee e, Employee m
WHERE e.managerId = m.id && e.salary > m.salary