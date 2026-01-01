Select distinct d.email as Email
FROM Person p, Person d
WHERE p.email = d.email && p.id != d.id