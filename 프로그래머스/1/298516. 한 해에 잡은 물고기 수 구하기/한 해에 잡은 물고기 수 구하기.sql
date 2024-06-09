select count(*) as FISH_COUNT
from FISH_INFO
where date_format(TIME, '%Y') = 2021