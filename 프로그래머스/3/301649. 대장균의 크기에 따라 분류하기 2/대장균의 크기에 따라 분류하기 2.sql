SELECT 
    A.ID,
    CASE 
        WHEN A.RANKING / A.TOTAL_COUNT * 100 <= 25 THEN 'CRITICAL'
        WHEN A.RANKING / A.TOTAL_COUNT * 100 <= 50 THEN 'HIGH'
        WHEN A.RANKING / A.TOTAL_COUNT * 100 <= 75 THEN 'MEDIUM'
        ELSE 'LOW'
    END AS 'COLONY_NAME'
FROM 
    (SELECT    
        *,  
        RANK() OVER (ORDER BY SIZE_OF_COLONY DESC) AS RANKING, 
        COUNT(*) OVER () AS TOTAL_COUNT
    FROM ECOLI_DATA) AS A
ORDER BY A.ID