struct target_pt_regs {
    uint64_t        regs[31];
    uint64_t        sp;
    uint64_t        pc;
    uint64_t        pstate;
};

#define UNAME_MACHINE "aarch64"
#define UNAME_MINIMUM_RELEASE "3.8.0"
