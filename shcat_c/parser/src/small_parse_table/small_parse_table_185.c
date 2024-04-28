/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_185.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_925(t_small_parse_table_array *v)
{
	v->a[18500] = anon_sym_PIPE_PIPE;
	v->a[18501] = anon_sym_AMP_AMP;
	v->a[18502] = anon_sym_PIPE;
	v->a[18503] = anon_sym_AMP;
	v->a[18504] = anon_sym_LT;
	v->a[18505] = anon_sym_GT;
	v->a[18506] = anon_sym_LT_LT;
	v->a[18507] = anon_sym_GT_GT;
	v->a[18508] = anon_sym_SEMI_SEMI;
	v->a[18509] = anon_sym_PIPE_AMP;
	v->a[18510] = anon_sym_AMP_GT;
	v->a[18511] = anon_sym_AMP_GT_GT;
	v->a[18512] = anon_sym_LT_AMP;
	v->a[18513] = anon_sym_GT_AMP;
	v->a[18514] = anon_sym_GT_PIPE;
	v->a[18515] = anon_sym_LT_AMP_DASH;
	v->a[18516] = anon_sym_GT_AMP_DASH;
	v->a[18517] = anon_sym_LT_LT_DASH;
	v->a[18518] = aux_sym_heredoc_redirect_token1;
	v->a[18519] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_926(v);
}

void	small_parse_table_926(t_small_parse_table_array *v)
{
	v->a[18520] = anon_sym_DOLLAR_LBRACK;
	v->a[18521] = sym__special_character;
	v->a[18522] = sym_raw_string;
	v->a[18523] = sym_ansi_c_string;
	v->a[18524] = aux_sym_number_token1;
	v->a[18525] = aux_sym_number_token2;
	v->a[18526] = anon_sym_DOLLAR_LBRACE;
	v->a[18527] = anon_sym_DOLLAR_LPAREN;
	v->a[18528] = anon_sym_BQUOTE;
	v->a[18529] = anon_sym_DOLLAR_BQUOTE;
	v->a[18530] = anon_sym_LT_LPAREN;
	v->a[18531] = anon_sym_GT_LPAREN;
	v->a[18532] = sym_word;
	v->a[18533] = 21;
	v->a[18534] = actions(3);
	v->a[18535] = 1;
	v->a[18536] = sym_comment;
	v->a[18537] = actions(3673);
	v->a[18538] = 1;
	v->a[18539] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_927(v);
}

void	small_parse_table_927(t_small_parse_table_array *v)
{
	v->a[18540] = actions(3675);
	v->a[18541] = 1;
	v->a[18542] = anon_sym_DOLLAR;
	v->a[18543] = actions(3677);
	v->a[18544] = 1;
	v->a[18545] = sym__special_character;
	v->a[18546] = actions(3679);
	v->a[18547] = 1;
	v->a[18548] = anon_sym_DQUOTE;
	v->a[18549] = actions(3681);
	v->a[18550] = 1;
	v->a[18551] = aux_sym_number_token1;
	v->a[18552] = actions(3683);
	v->a[18553] = 1;
	v->a[18554] = aux_sym_number_token2;
	v->a[18555] = actions(3685);
	v->a[18556] = 1;
	v->a[18557] = anon_sym_DOLLAR_LBRACE;
	v->a[18558] = actions(3687);
	v->a[18559] = 1;
	small_parse_table_928(v);
}

void	small_parse_table_928(t_small_parse_table_array *v)
{
	v->a[18560] = anon_sym_DOLLAR_LPAREN;
	v->a[18561] = actions(3689);
	v->a[18562] = 1;
	v->a[18563] = anon_sym_BQUOTE;
	v->a[18564] = actions(3691);
	v->a[18565] = 1;
	v->a[18566] = anon_sym_DOLLAR_BQUOTE;
	v->a[18567] = actions(3697);
	v->a[18568] = 1;
	v->a[18569] = sym__brace_start;
	v->a[18570] = actions(3709);
	v->a[18571] = 1;
	v->a[18572] = sym_test_operator;
	v->a[18573] = state(4695);
	v->a[18574] = 1;
	v->a[18575] = aux_sym__literal_repeat1;
	v->a[18576] = state(5096);
	v->a[18577] = 1;
	v->a[18578] = sym_concatenation;
	v->a[18579] = actions(2496);
	small_parse_table_929(v);
}

void	small_parse_table_929(t_small_parse_table_array *v)
{
	v->a[18580] = 2;
	v->a[18581] = sym_file_descriptor;
	v->a[18582] = aux_sym_heredoc_redirect_token1;
	v->a[18583] = actions(3671);
	v->a[18584] = 2;
	v->a[18585] = anon_sym_LPAREN_LPAREN;
	v->a[18586] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18587] = actions(3693);
	v->a[18588] = 2;
	v->a[18589] = anon_sym_LT_LPAREN;
	v->a[18590] = anon_sym_GT_LPAREN;
	v->a[18591] = actions(3707);
	v->a[18592] = 3;
	v->a[18593] = sym_raw_string;
	v->a[18594] = sym_ansi_c_string;
	v->a[18595] = sym_word;
	v->a[18596] = state(4555);
	v->a[18597] = 9;
	v->a[18598] = sym_arithmetic_expansion;
	v->a[18599] = sym_brace_expression;
	small_parse_table_930(v);
}

/* EOF small_parse_table_185.c */
