def save_job(job_key, job_dict):
    """Save a job object in the Redis database."""
    rd.hmset(.......)

def queue_job(jid):
    """Add a job to the redis queue."""
    ....

def add_job(start, end, status="submitted"):
    """Add a job to the redis queue."""
    jid = generate_jid()
    job_dict = instantiate_job(jid, status, start, end)
    save_job(......)
    queue_job(......)
    return job_dict
