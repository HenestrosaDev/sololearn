SELECT s.id, s.firstname, s.lastname, t.lastname AS teacher
FROM students AS s, teachers AS t
WHERE s.teacherid=t.id
ORDER BY s.id;