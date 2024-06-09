/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_375.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1875(t_small_parse_table_array *v)
{
	v->a[37500] = 7;
	v->a[37501] = actions(1404);
	v->a[37502] = 1;
	v->a[37503] = sym_comment;
	v->a[37504] = actions(1402);
	v->a[37505] = 2;
	v->a[37506] = anon_sym_PLUS_PLUS2;
	v->a[37507] = anon_sym_DASH_DASH2;
	v->a[37508] = actions(1410);
	v->a[37509] = 2;
	v->a[37510] = anon_sym_GT_GT;
	v->a[37511] = anon_sym_LT_LT;
	v->a[37512] = actions(1414);
	v->a[37513] = 2;
	v->a[37514] = anon_sym_PLUS;
	v->a[37515] = anon_sym_DASH;
	v->a[37516] = actions(1406);
	v->a[37517] = 3;
	v->a[37518] = anon_sym_STAR;
	v->a[37519] = anon_sym_SLASH;
	small_parse_table_1876(v);
}

void	small_parse_table_1876(t_small_parse_table_array *v)
{
	v->a[37520] = anon_sym_PERCENT;
	v->a[37521] = actions(1513);
	v->a[37522] = 6;
	v->a[37523] = anon_sym_PIPE;
	v->a[37524] = anon_sym_EQ;
	v->a[37525] = anon_sym_LT;
	v->a[37526] = anon_sym_GT;
	v->a[37527] = anon_sym_CARET;
	v->a[37528] = anon_sym_AMP;
	v->a[37529] = actions(1515);
	v->a[37530] = 19;
	v->a[37531] = anon_sym_AMP_AMP;
	v->a[37532] = anon_sym_PIPE_PIPE;
	v->a[37533] = anon_sym_RPAREN_RPAREN;
	v->a[37534] = anon_sym_PLUS_EQ;
	v->a[37535] = anon_sym_DASH_EQ;
	v->a[37536] = anon_sym_STAR_EQ;
	v->a[37537] = anon_sym_SLASH_EQ;
	v->a[37538] = anon_sym_PERCENT_EQ;
	v->a[37539] = anon_sym_LT_LT_EQ;
	small_parse_table_1877(v);
}

void	small_parse_table_1877(t_small_parse_table_array *v)
{
	v->a[37540] = anon_sym_GT_GT_EQ;
	v->a[37541] = anon_sym_AMP_EQ;
	v->a[37542] = anon_sym_CARET_EQ;
	v->a[37543] = anon_sym_PIPE_EQ;
	v->a[37544] = anon_sym_EQ_EQ;
	v->a[37545] = anon_sym_BANG_EQ;
	v->a[37546] = anon_sym_LT_EQ;
	v->a[37547] = anon_sym_GT_EQ;
	v->a[37548] = anon_sym_QMARK;
	v->a[37549] = anon_sym_COLON;
	v->a[37550] = 3;
	v->a[37551] = actions(3);
	v->a[37552] = 1;
	v->a[37553] = sym_comment;
	v->a[37554] = actions(1311);
	v->a[37555] = 4;
	v->a[37556] = sym_file_descriptor;
	v->a[37557] = sym__concat;
	v->a[37558] = sym_variable_name;
	v->a[37559] = ts_builtin_sym_end;
	small_parse_table_1878(v);
}

void	small_parse_table_1878(t_small_parse_table_array *v)
{
	v->a[37560] = actions(1309);
	v->a[37561] = 30;
	v->a[37562] = anon_sym_PIPE;
	v->a[37563] = anon_sym_SEMI_SEMI;
	v->a[37564] = anon_sym_AMP_AMP;
	v->a[37565] = anon_sym_PIPE_PIPE;
	v->a[37566] = anon_sym_LT;
	v->a[37567] = anon_sym_GT;
	v->a[37568] = anon_sym_GT_GT;
	v->a[37569] = anon_sym_AMP_GT;
	v->a[37570] = anon_sym_AMP_GT_GT;
	v->a[37571] = anon_sym_LT_AMP;
	v->a[37572] = anon_sym_GT_AMP;
	v->a[37573] = anon_sym_GT_PIPE;
	v->a[37574] = anon_sym_LT_AMP_DASH;
	v->a[37575] = anon_sym_GT_AMP_DASH;
	v->a[37576] = anon_sym_LT_LT;
	v->a[37577] = anon_sym_LT_LT_DASH;
	v->a[37578] = aux_sym_heredoc_redirect_token1;
	v->a[37579] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1879(v);
}

void	small_parse_table_1879(t_small_parse_table_array *v)
{
	v->a[37580] = anon_sym_AMP;
	v->a[37581] = aux_sym_concatenation_token1;
	v->a[37582] = anon_sym_DOLLAR;
	v->a[37583] = anon_sym_DQUOTE;
	v->a[37584] = sym_raw_string;
	v->a[37585] = aux_sym_number_token1;
	v->a[37586] = aux_sym_number_token2;
	v->a[37587] = anon_sym_DOLLAR_LBRACE;
	v->a[37588] = anon_sym_DOLLAR_LPAREN;
	v->a[37589] = anon_sym_BQUOTE;
	v->a[37590] = sym_word;
	v->a[37591] = anon_sym_SEMI;
	v->a[37592] = 3;
	v->a[37593] = actions(3);
	v->a[37594] = 1;
	v->a[37595] = sym_comment;
	v->a[37596] = actions(1301);
	v->a[37597] = 4;
	v->a[37598] = sym_file_descriptor;
	v->a[37599] = sym__concat;
	small_parse_table_1880(v);
}

/* EOF small_parse_table_375.c */
