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
	v->a[18500] = anon_sym_PLUS;
	v->a[18501] = anon_sym_DASH;
	v->a[18502] = anon_sym_STAR;
	v->a[18503] = anon_sym_SLASH;
	v->a[18504] = anon_sym_PERCENT;
	v->a[18505] = actions(445);
	v->a[18506] = 20;
	v->a[18507] = anon_sym_RPAREN;
	v->a[18508] = anon_sym_AMP_AMP;
	v->a[18509] = anon_sym_PIPE_PIPE;
	v->a[18510] = anon_sym_PLUS_EQ;
	v->a[18511] = anon_sym_DASH_EQ;
	v->a[18512] = anon_sym_STAR_EQ;
	v->a[18513] = anon_sym_SLASH_EQ;
	v->a[18514] = anon_sym_PERCENT_EQ;
	v->a[18515] = anon_sym_LT_LT_EQ;
	v->a[18516] = anon_sym_GT_GT_EQ;
	v->a[18517] = anon_sym_AMP_EQ;
	v->a[18518] = anon_sym_CARET_EQ;
	v->a[18519] = anon_sym_PIPE_EQ;
	small_parse_table_926(v);
}

void	small_parse_table_926(t_small_parse_table_array *v)
{
	v->a[18520] = anon_sym_EQ_EQ;
	v->a[18521] = anon_sym_BANG_EQ;
	v->a[18522] = anon_sym_LT_EQ;
	v->a[18523] = anon_sym_GT_EQ;
	v->a[18524] = anon_sym_QMARK;
	v->a[18525] = anon_sym_PLUS_PLUS2;
	v->a[18526] = anon_sym_DASH_DASH2;
	v->a[18527] = 13;
	v->a[18528] = actions(3);
	v->a[18529] = 1;
	v->a[18530] = sym_comment;
	v->a[18531] = actions(542);
	v->a[18532] = 1;
	v->a[18533] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18534] = actions(545);
	v->a[18535] = 1;
	v->a[18536] = anon_sym_DOLLAR;
	v->a[18537] = actions(548);
	v->a[18538] = 1;
	v->a[18539] = anon_sym_DQUOTE;
	small_parse_table_927(v);
}

void	small_parse_table_927(t_small_parse_table_array *v)
{
	v->a[18540] = actions(551);
	v->a[18541] = 1;
	v->a[18542] = anon_sym_DOLLAR_LBRACE;
	v->a[18543] = actions(554);
	v->a[18544] = 1;
	v->a[18545] = anon_sym_DOLLAR_LPAREN;
	v->a[18546] = actions(557);
	v->a[18547] = 1;
	v->a[18548] = anon_sym_BQUOTE;
	v->a[18549] = actions(560);
	v->a[18550] = 1;
	v->a[18551] = sym__bare_dollar;
	v->a[18552] = state(191);
	v->a[18553] = 1;
	v->a[18554] = aux_sym_command_repeat2;
	v->a[18555] = state(614);
	v->a[18556] = 1;
	v->a[18557] = sym_concatenation;
	v->a[18558] = actions(539);
	v->a[18559] = 3;
	small_parse_table_928(v);
}

void	small_parse_table_928(t_small_parse_table_array *v)
{
	v->a[18560] = sym_raw_string;
	v->a[18561] = sym_number;
	v->a[18562] = sym_word;
	v->a[18563] = state(344);
	v->a[18564] = 5;
	v->a[18565] = sym_arithmetic_expansion;
	v->a[18566] = sym_string;
	v->a[18567] = sym_simple_expansion;
	v->a[18568] = sym_expansion;
	v->a[18569] = sym_command_substitution;
	v->a[18570] = actions(506);
	v->a[18571] = 16;
	v->a[18572] = anon_sym_PIPE;
	v->a[18573] = anon_sym_RPAREN;
	v->a[18574] = anon_sym_SEMI_SEMI;
	v->a[18575] = anon_sym_AMP_AMP;
	v->a[18576] = anon_sym_PIPE_PIPE;
	v->a[18577] = anon_sym_LT;
	v->a[18578] = anon_sym_GT;
	v->a[18579] = anon_sym_GT_GT;
	small_parse_table_929(v);
}

void	small_parse_table_929(t_small_parse_table_array *v)
{
	v->a[18580] = anon_sym_LT_AMP;
	v->a[18581] = anon_sym_GT_AMP;
	v->a[18582] = anon_sym_GT_PIPE;
	v->a[18583] = anon_sym_LT_GT;
	v->a[18584] = anon_sym_LT_LT;
	v->a[18585] = anon_sym_LT_LT_DASH;
	v->a[18586] = aux_sym_heredoc_redirect_token1;
	v->a[18587] = anon_sym_SEMI;
	v->a[18588] = 17;
	v->a[18589] = actions(407);
	v->a[18590] = 1;
	v->a[18591] = sym_comment;
	v->a[18592] = actions(409);
	v->a[18593] = 1;
	v->a[18594] = anon_sym_PIPE;
	v->a[18595] = actions(411);
	v->a[18596] = 1;
	v->a[18597] = anon_sym_AMP_AMP;
	v->a[18598] = actions(413);
	v->a[18599] = 1;
	small_parse_table_930(v);
}

/* EOF small_parse_table_185.c */
