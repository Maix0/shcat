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
	v->a[18500] = aux_sym_heredoc_redirect_token1;
	v->a[18501] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18502] = anon_sym_DQUOTE;
	v->a[18503] = sym_raw_string;
	v->a[18504] = sym_number;
	v->a[18505] = anon_sym_DOLLAR_LBRACE;
	v->a[18506] = anon_sym_DOLLAR_LPAREN;
	v->a[18507] = anon_sym_BQUOTE;
	v->a[18508] = sym_word;
	v->a[18509] = anon_sym_SEMI;
	v->a[18510] = 16;
	v->a[18511] = actions(3);
	v->a[18512] = 1;
	v->a[18513] = sym_comment;
	v->a[18514] = actions(17);
	v->a[18515] = 1;
	v->a[18516] = anon_sym_LPAREN;
	v->a[18517] = actions(405);
	v->a[18518] = 1;
	v->a[18519] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_926(v);
}

void	small_parse_table_926(t_small_parse_table_array *v)
{
	v->a[18520] = actions(407);
	v->a[18521] = 1;
	v->a[18522] = anon_sym_DOLLAR;
	v->a[18523] = actions(409);
	v->a[18524] = 1;
	v->a[18525] = anon_sym_DQUOTE;
	v->a[18526] = actions(411);
	v->a[18527] = 1;
	v->a[18528] = anon_sym_DOLLAR_LBRACE;
	v->a[18529] = actions(413);
	v->a[18530] = 1;
	v->a[18531] = anon_sym_DOLLAR_LPAREN;
	v->a[18532] = actions(415);
	v->a[18533] = 1;
	v->a[18534] = anon_sym_BQUOTE;
	v->a[18535] = actions(417);
	v->a[18536] = 1;
	v->a[18537] = sym_file_descriptor;
	v->a[18538] = actions(419);
	v->a[18539] = 1;
	small_parse_table_927(v);
}

void	small_parse_table_927(t_small_parse_table_array *v)
{
	v->a[18540] = sym__bare_dollar;
	v->a[18541] = state(201);
	v->a[18542] = 1;
	v->a[18543] = aux_sym_command_repeat2;
	v->a[18544] = state(674);
	v->a[18545] = 1;
	v->a[18546] = sym_concatenation;
	v->a[18547] = state(1181);
	v->a[18548] = 1;
	v->a[18549] = sym_subshell;
	v->a[18550] = actions(401);
	v->a[18551] = 3;
	v->a[18552] = sym_raw_string;
	v->a[18553] = sym_number;
	v->a[18554] = sym_word;
	v->a[18555] = state(446);
	v->a[18556] = 5;
	v->a[18557] = sym_arithmetic_expansion;
	v->a[18558] = sym_string;
	v->a[18559] = sym_simple_expansion;
	small_parse_table_928(v);
}

void	small_parse_table_928(t_small_parse_table_array *v)
{
	v->a[18560] = sym_expansion;
	v->a[18561] = sym_command_substitution;
	v->a[18562] = actions(403);
	v->a[18563] = 16;
	v->a[18564] = anon_sym_PIPE;
	v->a[18565] = anon_sym_RPAREN;
	v->a[18566] = anon_sym_SEMI_SEMI;
	v->a[18567] = anon_sym_AMP_AMP;
	v->a[18568] = anon_sym_PIPE_PIPE;
	v->a[18569] = anon_sym_LT;
	v->a[18570] = anon_sym_GT;
	v->a[18571] = anon_sym_GT_GT;
	v->a[18572] = anon_sym_LT_AMP;
	v->a[18573] = anon_sym_GT_AMP;
	v->a[18574] = anon_sym_GT_PIPE;
	v->a[18575] = anon_sym_LT_GT;
	v->a[18576] = anon_sym_LT_LT;
	v->a[18577] = anon_sym_LT_LT_DASH;
	v->a[18578] = aux_sym_heredoc_redirect_token1;
	v->a[18579] = anon_sym_SEMI;
	small_parse_table_929(v);
}

void	small_parse_table_929(t_small_parse_table_array *v)
{
	v->a[18580] = 6;
	v->a[18581] = actions(3);
	v->a[18582] = 1;
	v->a[18583] = sym_comment;
	v->a[18584] = actions(367);
	v->a[18585] = 1;
	v->a[18586] = sym_file_descriptor;
	v->a[18587] = actions(425);
	v->a[18588] = 1;
	v->a[18589] = sym_variable_name;
	v->a[18590] = actions(423);
	v->a[18591] = 2;
	v->a[18592] = aux_sym__simple_variable_name_token1;
	v->a[18593] = aux_sym__multiline_variable_name_token1;
	v->a[18594] = actions(421);
	v->a[18595] = 8;
	v->a[18596] = anon_sym_BANG;
	v->a[18597] = anon_sym_DASH;
	v->a[18598] = anon_sym_STAR;
	v->a[18599] = anon_sym_QMARK;
	small_parse_table_930(v);
}

/* EOF small_parse_table_185.c */
