/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_35.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_175(t_small_parse_table_array *v)
{
	v->a[3500] = 1;
	v->a[3501] = aux_sym__literal_repeat1;
	v->a[3502] = state(1712);
	v->a[3503] = 1;
	v->a[3504] = sym_herestring_redirect;
	v->a[3505] = state(1716);
	v->a[3506] = 1;
	v->a[3507] = sym_concatenation;
	v->a[3508] = actions(1543);
	v->a[3509] = 2;
	v->a[3510] = anon_sym_LPAREN_LPAREN;
	v->a[3511] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3512] = actions(1545);
	v->a[3513] = 2;
	v->a[3514] = anon_sym_EQ_EQ;
	v->a[3515] = anon_sym_EQ_TILDE;
	v->a[3516] = actions(1569);
	v->a[3517] = 2;
	v->a[3518] = anon_sym_LT_LPAREN;
	v->a[3519] = anon_sym_GT_LPAREN;
	small_parse_table_176(v);
}

void	small_parse_table_176(t_small_parse_table_array *v)
{
	v->a[3520] = actions(1615);
	v->a[3521] = 2;
	v->a[3522] = sym_file_descriptor;
	v->a[3523] = aux_sym_heredoc_redirect_token1;
	v->a[3524] = actions(1541);
	v->a[3525] = 3;
	v->a[3526] = sym_raw_string;
	v->a[3527] = sym_ansi_c_string;
	v->a[3528] = sym_word;
	v->a[3529] = state(1023);
	v->a[3530] = 9;
	v->a[3531] = sym_arithmetic_expansion;
	v->a[3532] = sym_brace_expression;
	v->a[3533] = sym_string;
	v->a[3534] = sym_translated_string;
	v->a[3535] = sym_number;
	v->a[3536] = sym_simple_expansion;
	v->a[3537] = sym_expansion;
	v->a[3538] = sym_command_substitution;
	v->a[3539] = sym_process_substitution;
	small_parse_table_177(v);
}

void	small_parse_table_177(t_small_parse_table_array *v)
{
	v->a[3540] = actions(1613);
	v->a[3541] = 20;
	v->a[3542] = anon_sym_SEMI;
	v->a[3543] = anon_sym_PIPE_PIPE;
	v->a[3544] = anon_sym_AMP_AMP;
	v->a[3545] = anon_sym_PIPE;
	v->a[3546] = anon_sym_AMP;
	v->a[3547] = anon_sym_LT;
	v->a[3548] = anon_sym_GT;
	v->a[3549] = anon_sym_LT_LT;
	v->a[3550] = anon_sym_GT_GT;
	v->a[3551] = anon_sym_RPAREN;
	v->a[3552] = anon_sym_SEMI_SEMI;
	v->a[3553] = anon_sym_PIPE_AMP;
	v->a[3554] = anon_sym_AMP_GT;
	v->a[3555] = anon_sym_AMP_GT_GT;
	v->a[3556] = anon_sym_LT_AMP;
	v->a[3557] = anon_sym_GT_AMP;
	v->a[3558] = anon_sym_GT_PIPE;
	v->a[3559] = anon_sym_LT_AMP_DASH;
	small_parse_table_178(v);
}

void	small_parse_table_178(t_small_parse_table_array *v)
{
	v->a[3560] = anon_sym_GT_AMP_DASH;
	v->a[3561] = anon_sym_LT_LT_DASH;
	v->a[3562] = 27;
	v->a[3563] = actions(3);
	v->a[3564] = 1;
	v->a[3565] = sym_comment;
	v->a[3566] = actions(1491);
	v->a[3567] = 1;
	v->a[3568] = aux_sym_heredoc_redirect_token1;
	v->a[3569] = actions(1868);
	v->a[3570] = 1;
	v->a[3571] = anon_sym_LT_LT_LT;
	v->a[3572] = actions(1871);
	v->a[3573] = 1;
	v->a[3574] = anon_sym_DOLLAR_LBRACK;
	v->a[3575] = actions(1874);
	v->a[3576] = 1;
	v->a[3577] = anon_sym_DOLLAR;
	v->a[3578] = actions(1877);
	v->a[3579] = 1;
	small_parse_table_179(v);
}

void	small_parse_table_179(t_small_parse_table_array *v)
{
	v->a[3580] = sym__special_character;
	v->a[3581] = actions(1880);
	v->a[3582] = 1;
	v->a[3583] = anon_sym_DQUOTE;
	v->a[3584] = actions(1883);
	v->a[3585] = 1;
	v->a[3586] = aux_sym_number_token1;
	v->a[3587] = actions(1886);
	v->a[3588] = 1;
	v->a[3589] = aux_sym_number_token2;
	v->a[3590] = actions(1889);
	v->a[3591] = 1;
	v->a[3592] = anon_sym_DOLLAR_LBRACE;
	v->a[3593] = actions(1892);
	v->a[3594] = 1;
	v->a[3595] = anon_sym_DOLLAR_LPAREN;
	v->a[3596] = actions(1895);
	v->a[3597] = 1;
	v->a[3598] = anon_sym_BQUOTE;
	v->a[3599] = actions(1898);
	small_parse_table_180(v);
}

/* EOF small_parse_table_35.c */
