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
	v->a[18500] = anon_sym_PIPE;
	v->a[18501] = anon_sym_SEMI_SEMI;
	v->a[18502] = anon_sym_AMP_AMP;
	v->a[18503] = anon_sym_PIPE_PIPE;
	v->a[18504] = anon_sym_LT;
	v->a[18505] = anon_sym_GT;
	v->a[18506] = anon_sym_GT_GT;
	v->a[18507] = anon_sym_LT_AMP;
	v->a[18508] = anon_sym_GT_AMP;
	v->a[18509] = anon_sym_GT_PIPE;
	v->a[18510] = anon_sym_LT_GT;
	v->a[18511] = anon_sym_LT_LT;
	v->a[18512] = anon_sym_LT_LT_DASH;
	v->a[18513] = aux_sym_heredoc_redirect_token1;
	v->a[18514] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18515] = anon_sym_AMP;
	v->a[18516] = anon_sym_DQUOTE;
	v->a[18517] = sym_raw_string;
	v->a[18518] = sym_number;
	v->a[18519] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_926(v);
}

void	small_parse_table_926(t_small_parse_table_array *v)
{
	v->a[18520] = anon_sym_DOLLAR_LPAREN;
	v->a[18521] = anon_sym_BQUOTE;
	v->a[18522] = sym_word;
	v->a[18523] = anon_sym_SEMI;
	v->a[18524] = 6;
	v->a[18525] = actions(3);
	v->a[18526] = 1;
	v->a[18527] = sym_comment;
	v->a[18528] = actions(393);
	v->a[18529] = 1;
	v->a[18530] = sym_variable_name;
	v->a[18531] = actions(361);
	v->a[18532] = 2;
	v->a[18533] = sym_file_descriptor;
	v->a[18534] = sym__bare_dollar;
	v->a[18535] = actions(391);
	v->a[18536] = 2;
	v->a[18537] = aux_sym__simple_variable_name_token1;
	v->a[18538] = aux_sym__multiline_variable_name_token1;
	v->a[18539] = actions(389);
	small_parse_table_927(v);
}

void	small_parse_table_927(t_small_parse_table_array *v)
{
	v->a[18540] = 9;
	v->a[18541] = anon_sym_BANG;
	v->a[18542] = anon_sym_DASH;
	v->a[18543] = anon_sym_STAR;
	v->a[18544] = anon_sym_QMARK;
	v->a[18545] = anon_sym_DOLLAR;
	v->a[18546] = anon_sym_POUND;
	v->a[18547] = anon_sym_AT;
	v->a[18548] = anon_sym_0;
	v->a[18549] = anon_sym__;
	v->a[18550] = actions(363);
	v->a[18551] = 24;
	v->a[18552] = anon_sym_PIPE;
	v->a[18553] = anon_sym_SEMI_SEMI;
	v->a[18554] = anon_sym_AMP_AMP;
	v->a[18555] = anon_sym_PIPE_PIPE;
	v->a[18556] = anon_sym_LT;
	v->a[18557] = anon_sym_GT;
	v->a[18558] = anon_sym_GT_GT;
	v->a[18559] = anon_sym_LT_AMP;
	small_parse_table_928(v);
}

void	small_parse_table_928(t_small_parse_table_array *v)
{
	v->a[18560] = anon_sym_GT_AMP;
	v->a[18561] = anon_sym_GT_PIPE;
	v->a[18562] = anon_sym_LT_GT;
	v->a[18563] = anon_sym_LT_LT;
	v->a[18564] = anon_sym_LT_LT_DASH;
	v->a[18565] = aux_sym_heredoc_redirect_token1;
	v->a[18566] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18567] = anon_sym_AMP;
	v->a[18568] = anon_sym_DQUOTE;
	v->a[18569] = sym_raw_string;
	v->a[18570] = sym_number;
	v->a[18571] = anon_sym_DOLLAR_LBRACE;
	v->a[18572] = anon_sym_DOLLAR_LPAREN;
	v->a[18573] = anon_sym_BQUOTE;
	v->a[18574] = sym_word;
	v->a[18575] = anon_sym_SEMI;
	v->a[18576] = 6;
	v->a[18577] = actions(3);
	v->a[18578] = 1;
	v->a[18579] = sym_comment;
	small_parse_table_929(v);
}

void	small_parse_table_929(t_small_parse_table_array *v)
{
	v->a[18580] = actions(405);
	v->a[18581] = 1;
	v->a[18582] = sym_variable_name;
	v->a[18583] = actions(361);
	v->a[18584] = 2;
	v->a[18585] = sym_file_descriptor;
	v->a[18586] = ts_builtin_sym_end;
	v->a[18587] = actions(403);
	v->a[18588] = 2;
	v->a[18589] = aux_sym__simple_variable_name_token1;
	v->a[18590] = aux_sym__multiline_variable_name_token1;
	v->a[18591] = actions(401);
	v->a[18592] = 9;
	v->a[18593] = anon_sym_BANG;
	v->a[18594] = anon_sym_DASH;
	v->a[18595] = anon_sym_STAR;
	v->a[18596] = anon_sym_QMARK;
	v->a[18597] = anon_sym_DOLLAR;
	v->a[18598] = anon_sym_POUND;
	v->a[18599] = anon_sym_AT;
	small_parse_table_930(v);
}

/* EOF small_parse_table_185.c */
