/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_847.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4235(t_small_parse_table_array *v)
{
	v->a[84700] = sym__concat;
	v->a[84701] = state(1587);
	v->a[84702] = 1;
	v->a[84703] = aux_sym_concatenation_repeat1;
	v->a[84704] = actions(1172);
	v->a[84705] = 13;
	v->a[84706] = anon_sym_SEMI_SEMI;
	v->a[84707] = aux_sym_heredoc_redirect_token1;
	v->a[84708] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84709] = anon_sym_AMP;
	v->a[84710] = anon_sym_DOLLAR;
	v->a[84711] = anon_sym_DQUOTE;
	v->a[84712] = sym_raw_string;
	v->a[84713] = sym_number;
	v->a[84714] = anon_sym_DOLLAR_LBRACE;
	v->a[84715] = anon_sym_DOLLAR_LPAREN;
	v->a[84716] = anon_sym_BQUOTE;
	v->a[84717] = sym_word;
	v->a[84718] = anon_sym_SEMI;
	v->a[84719] = 10;
	small_parse_table_4236(v);
}

void	small_parse_table_4236(t_small_parse_table_array *v)
{
	v->a[84720] = actions(3);
	v->a[84721] = 1;
	v->a[84722] = sym_comment;
	v->a[84723] = actions(718);
	v->a[84724] = 1;
	v->a[84725] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84726] = actions(720);
	v->a[84727] = 1;
	v->a[84728] = anon_sym_DOLLAR;
	v->a[84729] = actions(722);
	v->a[84730] = 1;
	v->a[84731] = anon_sym_DQUOTE;
	v->a[84732] = actions(724);
	v->a[84733] = 1;
	v->a[84734] = anon_sym_DOLLAR_LBRACE;
	v->a[84735] = actions(726);
	v->a[84736] = 1;
	v->a[84737] = anon_sym_DOLLAR_LPAREN;
	v->a[84738] = actions(728);
	v->a[84739] = 1;
	small_parse_table_4237(v);
}

void	small_parse_table_4237(t_small_parse_table_array *v)
{
	v->a[84740] = anon_sym_BQUOTE;
	v->a[84741] = state(250);
	v->a[84742] = 2;
	v->a[84743] = sym_concatenation;
	v->a[84744] = aux_sym_for_statement_repeat1;
	v->a[84745] = actions(873);
	v->a[84746] = 3;
	v->a[84747] = sym_raw_string;
	v->a[84748] = sym_number;
	v->a[84749] = sym_word;
	v->a[84750] = state(647);
	v->a[84751] = 5;
	v->a[84752] = sym_arithmetic_expansion;
	v->a[84753] = sym_string;
	v->a[84754] = sym_simple_expansion;
	v->a[84755] = sym_expansion;
	v->a[84756] = sym_command_substitution;
	v->a[84757] = 3;
	v->a[84758] = actions(3);
	v->a[84759] = 1;
	small_parse_table_4238(v);
}

void	small_parse_table_4238(t_small_parse_table_array *v)
{
	v->a[84760] = sym_comment;
	v->a[84761] = actions(1118);
	v->a[84762] = 3;
	v->a[84763] = sym_file_descriptor;
	v->a[84764] = sym__concat;
	v->a[84765] = aux_sym_heredoc_redirect_token1;
	v->a[84766] = actions(1116);
	v->a[84767] = 13;
	v->a[84768] = anon_sym_AMP_AMP;
	v->a[84769] = anon_sym_PIPE_PIPE;
	v->a[84770] = anon_sym_LT;
	v->a[84771] = anon_sym_GT;
	v->a[84772] = anon_sym_GT_GT;
	v->a[84773] = anon_sym_AMP_GT;
	v->a[84774] = anon_sym_AMP_GT_GT;
	v->a[84775] = anon_sym_LT_AMP;
	v->a[84776] = anon_sym_GT_AMP;
	v->a[84777] = anon_sym_GT_PIPE;
	v->a[84778] = anon_sym_LT_AMP_DASH;
	v->a[84779] = anon_sym_GT_AMP_DASH;
	small_parse_table_4239(v);
}

void	small_parse_table_4239(t_small_parse_table_array *v)
{
	v->a[84780] = aux_sym_concatenation_token1;
	v->a[84781] = 3;
	v->a[84782] = actions(3);
	v->a[84783] = 1;
	v->a[84784] = sym_comment;
	v->a[84785] = actions(1126);
	v->a[84786] = 3;
	v->a[84787] = sym_file_descriptor;
	v->a[84788] = sym__concat;
	v->a[84789] = aux_sym_heredoc_redirect_token1;
	v->a[84790] = actions(1124);
	v->a[84791] = 13;
	v->a[84792] = anon_sym_AMP_AMP;
	v->a[84793] = anon_sym_PIPE_PIPE;
	v->a[84794] = anon_sym_LT;
	v->a[84795] = anon_sym_GT;
	v->a[84796] = anon_sym_GT_GT;
	v->a[84797] = anon_sym_AMP_GT;
	v->a[84798] = anon_sym_AMP_GT_GT;
	v->a[84799] = anon_sym_LT_AMP;
	small_parse_table_4240(v);
}

/* EOF small_parse_table_847.c */
