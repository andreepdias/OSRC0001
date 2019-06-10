static unsigned int tun_chr_poll(struct file *file, poll_table
                                                        *wait)
{
    struct tun_file *tfile = file->private_data;
    struct tun_struct *tun = __tun_get(tfile);
    struct sock *sk;
    unsigned int mask = 0;
    if (!tun)
        return POLLERR;
    sk = tun->sk;
    /* The remaining code is omitted because it is unchanged... */
}