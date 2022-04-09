fd = open(argv[1], O_RDONLY);
setns(fd, 0);
execvp(argv[2], &argv[2]);