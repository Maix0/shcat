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
	v->a[18500] = actions(3);
	v->a[18501] = 1;
	v->a[18502] = sym_comment;
	v->a[18503] = actions(423);
	v->a[18504] = 1;
	v->a[18505] = ts_builtin_sym_end;
	v->a[18506] = actions(723);
	v->a[18507] = 1;
	v->a[18508] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18509] = actions(725);
	v->a[18510] = 1;
	v->a[18511] = anon_sym_DOLLAR;
	v->a[18512] = actions(727);
	v->a[18513] = 1;
	v->a[18514] = anon_sym_DQUOTE;
	v->a[18515] = actions(729);
	v->a[18516] = 1;
	v->a[18517] = anon_sym_DOLLAR_LBRACE;
	v->a[18518] = actions(731);
	v->a[18519] = 1;
	small_parse_table_926(v);
}

void	small_parse_table_926(t_small_parse_table_array *v)
{
	v->a[18520] = anon_sym_DOLLAR_LPAREN;
	v->a[18521] = actions(733);
	v->a[18522] = 1;
	v->a[18523] = anon_sym_BQUOTE;
	v->a[18524] = state(203);
	v->a[18525] = 2;
	v->a[18526] = sym_concatenation;
	v->a[18527] = aux_sym_for_statement_repeat1;
	v->a[18528] = actions(721);
	v->a[18529] = 3;
	v->a[18530] = sym_raw_string;
	v->a[18531] = sym_number;
	v->a[18532] = sym_word;
	v->a[18533] = state(409);
	v->a[18534] = 5;
	v->a[18535] = sym_arithmetic_expansion;
	v->a[18536] = sym_string;
	v->a[18537] = sym_simple_expansion;
	v->a[18538] = sym_expansion;
	v->a[18539] = sym_command_substitution;
	small_parse_table_927(v);
}

void	small_parse_table_927(t_small_parse_table_array *v)
{
	v->a[18540] = actions(421);
	v->a[18541] = 10;
	v->a[18542] = anon_sym_PIPE;
	v->a[18543] = anon_sym_SEMI_SEMI;
	v->a[18544] = anon_sym_AMP_AMP;
	v->a[18545] = anon_sym_PIPE_PIPE;
	v->a[18546] = anon_sym_LT;
	v->a[18547] = anon_sym_GT;
	v->a[18548] = anon_sym_GT_GT;
	v->a[18549] = anon_sym_LT_LT;
	v->a[18550] = aux_sym_heredoc_redirect_token1;
	v->a[18551] = anon_sym_SEMI;
	v->a[18552] = 12;
	v->a[18553] = actions(3);
	v->a[18554] = 1;
	v->a[18555] = sym_comment;
	v->a[18556] = actions(448);
	v->a[18557] = 1;
	v->a[18558] = ts_builtin_sym_end;
	v->a[18559] = actions(738);
	small_parse_table_928(v);
}

void	small_parse_table_928(t_small_parse_table_array *v)
{
	v->a[18560] = 1;
	v->a[18561] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18562] = actions(741);
	v->a[18563] = 1;
	v->a[18564] = anon_sym_DOLLAR;
	v->a[18565] = actions(744);
	v->a[18566] = 1;
	v->a[18567] = anon_sym_DQUOTE;
	v->a[18568] = actions(747);
	v->a[18569] = 1;
	v->a[18570] = anon_sym_DOLLAR_LBRACE;
	v->a[18571] = actions(750);
	v->a[18572] = 1;
	v->a[18573] = anon_sym_DOLLAR_LPAREN;
	v->a[18574] = actions(753);
	v->a[18575] = 1;
	v->a[18576] = anon_sym_BQUOTE;
	v->a[18577] = state(203);
	v->a[18578] = 2;
	v->a[18579] = sym_concatenation;
	small_parse_table_929(v);
}

void	small_parse_table_929(t_small_parse_table_array *v)
{
	v->a[18580] = aux_sym_for_statement_repeat1;
	v->a[18581] = actions(735);
	v->a[18582] = 3;
	v->a[18583] = sym_raw_string;
	v->a[18584] = sym_number;
	v->a[18585] = sym_word;
	v->a[18586] = state(409);
	v->a[18587] = 5;
	v->a[18588] = sym_arithmetic_expansion;
	v->a[18589] = sym_string;
	v->a[18590] = sym_simple_expansion;
	v->a[18591] = sym_expansion;
	v->a[18592] = sym_command_substitution;
	v->a[18593] = actions(428);
	v->a[18594] = 10;
	v->a[18595] = anon_sym_PIPE;
	v->a[18596] = anon_sym_SEMI_SEMI;
	v->a[18597] = anon_sym_AMP_AMP;
	v->a[18598] = anon_sym_PIPE_PIPE;
	v->a[18599] = anon_sym_LT;
	small_parse_table_930(v);
}

/* EOF small_parse_table_185.c */
