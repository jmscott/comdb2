/* BERK_DEF_ATTR(option, description, type, default) */

BERK_DEF_ATTR(iomap_enabled, "Map file that tells comdb2ar to pause while we fsync", BERK_ATTR_TYPE_BOOLEAN, 1)
BERK_DEF_ATTR(flush_scan_dbs_first, "Don't hold bufpool mutex while opening files for flush", BERK_ATTR_TYPE_BOOLEAN, 0)
BERK_DEF_ATTR(skip_sync_if_direct, "Don't fsync files if directio enabled", BERK_ATTR_TYPE_BOOLEAN, 1)
BERK_DEF_ATTR(warn_on_replicant_log_write, "Warn if replicant is writing to logs", BERK_ATTR_TYPE_BOOLEAN, 1)
BERK_DEF_ATTR(abort_on_replicant_log_write , "Abort if replicant is writing to logs", BERK_ATTR_TYPE_BOOLEAN, 0)
BERK_DEF_ATTR(debug_deadlock_replicant_percent , "Percent of replicant events getting deadlocks", BERK_ATTR_TYPE_PERCENT, 0)
BERK_DEF_ATTR(always_run_recovery, "Replicant always runs recovery after rep_verify", BERK_ATTR_TYPE_BOOLEAN, 1)
BERK_DEF_ATTR(debug_addrem_dbregs, "Generate debug records for addrems", BERK_ATTR_TYPE_BOOLEAN, 0)
BERK_DEF_ATTR(start_recovery_at_dbregs, "Start recovery at dbregs", BERK_ATTR_TYPE_BOOLEAN, 1)
BERK_DEF_ATTR(apprec_track_lsn_ranges, "During recovery track lsn ranges", BERK_ATTR_TYPE_BOOLEAN, 1)
BERK_DEF_ATTR(dbreg_errors_fatal, "dbreg errors fatal", BERK_ATTR_TYPE_BOOLEAN, 0)
BERK_DEF_ATTR(warn_nondbreg_records, "warn on non-dbreg records before checkpoint", BERK_ATTR_TYPE_BOOLEAN, 0)
BERK_DEF_ATTR(num_write_retries, "number of times to retry writes on ENOSPC", BERK_ATTR_TYPE_INTEGER, 8)
BERK_DEF_ATTR(debug_enospc_chance, "DEBUG %% random ENOSPC on writes", BERK_ATTR_TYPE_PERCENT, 0)
BERK_DEF_ATTR(check_zero_lsn_writes, "Warn on writing pages with zero LSNs", BERK_ATTR_TYPE_BOOLEAN, 1)
BERK_DEF_ATTR(abort_zero_lsn_writes, "Abort on writing pages with zero headers", BERK_ATTR_TYPE_BOOLEAN, 0)
BERK_DEF_ATTR(abort_zero_lsn_memp_put, "Abort on memp_fput pages with zero headers", BERK_ATTR_TYPE_BOOLEAN, 0)
BERK_DEF_ATTR(preallocate_on_writes, "Pre-allocate on writes", BERK_ATTR_TYPE_BOOLEAN, 0)
BERK_DEF_ATTR(preallocate_max, "Pre-allocation size", BERK_ATTR_TYPE_INTEGER, 256 * MEGABYTE)
BERK_DEF_ATTR(lsnerr_pgdump, "Dump page on LSN errors", BERK_ATTR_TYPE_BOOLEAN, 1)
BERK_DEF_ATTR(lsnerr_pgdump_all, "Dump page on LSN errors on all nodes", BERK_ATTR_TYPE_BOOLEAN, 0)
BERK_DEF_ATTR(max_backout_seconds, "Refuse to roll back replicant past this many seconds", BERK_ATTR_TYPE_INTEGER, 0)
BERK_DEF_ATTR(max_backout_logs, "Refuse to roll back replicant past this many log files", BERK_ATTR_TYPE_INTEGER, 3)
BERK_DEF_ATTR(log_applied_lsns, "Log applied LSNs to log", BERK_ATTR_TYPE_BOOLEAN, 0)
BERK_DEF_ATTR(check_applied_lsns, "Check transaction that its LSNs have been applied", BERK_ATTR_TYPE_BOOLEAN, 0)
BERK_DEF_ATTR(check_applied_lsns_fatal, "Abort if check_applied_lsns fails", BERK_ATTR_TYPE_BOOLEAN, 0)
BERK_DEF_ATTR(sgio_enabled, "Do scatter gather I/O", BERK_ATTR_TYPE_BOOLEAN, 0)
BERK_DEF_ATTR(sgio_max, "Max scatter gather I/O to do at one time", BERK_ATTR_TYPE_INTEGER, 10 * MEGABYTE)
BERK_DEF_ATTR(btpf_enabled, "Enables index pages read ahead", BERK_ATTR_TYPE_BOOLEAN, 1)
BERK_DEF_ATTR(btpf_wndw_min, "Minimum number of pages read ahead", BERK_ATTR_TYPE_INTEGER, 500)
BERK_DEF_ATTR(btpf_wndw_max, "Maximum number of pages read ahead", BERK_ATTR_TYPE_INTEGER, 10000)
BERK_DEF_ATTR(btpf_wndw_inc, "Increment factor for the number of pages read ahead", BERK_ATTR_TYPE_INTEGER, 2)
BERK_DEF_ATTR(btpf_pg_gap, "Min. number of records to the page limit before read ahead", BERK_ATTR_TYPE_INTEGER, 5)
