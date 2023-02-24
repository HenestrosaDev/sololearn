CREATE VIEW v AS (
    SELECT acc_id, status
    FROM users
);

SELECT * FROM v;
