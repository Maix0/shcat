/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1057.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5285(t_small_parse_table_array *v)
{
	v->a[105700] = state(1343);
	v->a[105701] = 7;
	v->a[105702] = sym_arithmetic_expansion;
	v->a[105703] = sym_brace_expression;
	v->a[105704] = sym_string;
	v->a[105705] = sym_number;
	v->a[105706] = sym_simple_expansion;
	v->a[105707] = sym_expansion;
	v->a[105708] = sym_command_substitution;
	v->a[105709] = 3;
	v->a[105710] = actions(3);
	v->a[105711] = 1;
	v->a[105712] = sym_comment;
	v->a[105713] = actions(6081);
	v->a[105714] = 3;
	v->a[105715] = sym_file_descriptor;
	v->a[105716] = ts_builtin_sym_end;
	v->a[105717] = aux_sym_heredoc_redirect_token1;
	v->a[105718] = actions(6083);
	v->a[105719] = 21;
	small_parse_table_5286(v);
}

void	small_parse_table_5286(t_small_parse_table_array *v)
{
	v->a[105720] = anon_sym_PIPE;
	v->a[105721] = anon_sym_RPAREN;
	v->a[105722] = anon_sym_SEMI_SEMI;
	v->a[105723] = anon_sym_PIPE_AMP;
	v->a[105724] = anon_sym_AMP_AMP;
	v->a[105725] = anon_sym_PIPE_PIPE;
	v->a[105726] = anon_sym_LT;
	v->a[105727] = anon_sym_GT;
	v->a[105728] = anon_sym_GT_GT;
	v->a[105729] = anon_sym_AMP_GT;
	v->a[105730] = anon_sym_AMP_GT_GT;
	v->a[105731] = anon_sym_LT_AMP;
	v->a[105732] = anon_sym_GT_AMP;
	v->a[105733] = anon_sym_GT_PIPE;
	v->a[105734] = anon_sym_LT_AMP_DASH;
	v->a[105735] = anon_sym_GT_AMP_DASH;
	v->a[105736] = anon_sym_LT_LT;
	v->a[105737] = anon_sym_LT_LT_DASH;
	v->a[105738] = anon_sym_AMP;
	v->a[105739] = anon_sym_BQUOTE;
	small_parse_table_5287(v);
}

void	small_parse_table_5287(t_small_parse_table_array *v)
{
	v->a[105740] = anon_sym_SEMI;
	v->a[105741] = 3;
	v->a[105742] = actions(3);
	v->a[105743] = 1;
	v->a[105744] = sym_comment;
	v->a[105745] = actions(6069);
	v->a[105746] = 3;
	v->a[105747] = sym_file_descriptor;
	v->a[105748] = ts_builtin_sym_end;
	v->a[105749] = aux_sym_heredoc_redirect_token1;
	v->a[105750] = actions(6067);
	v->a[105751] = 21;
	v->a[105752] = anon_sym_PIPE;
	v->a[105753] = anon_sym_RPAREN;
	v->a[105754] = anon_sym_SEMI_SEMI;
	v->a[105755] = anon_sym_PIPE_AMP;
	v->a[105756] = anon_sym_AMP_AMP;
	v->a[105757] = anon_sym_PIPE_PIPE;
	v->a[105758] = anon_sym_LT;
	v->a[105759] = anon_sym_GT;
	small_parse_table_5288(v);
}

void	small_parse_table_5288(t_small_parse_table_array *v)
{
	v->a[105760] = anon_sym_GT_GT;
	v->a[105761] = anon_sym_AMP_GT;
	v->a[105762] = anon_sym_AMP_GT_GT;
	v->a[105763] = anon_sym_LT_AMP;
	v->a[105764] = anon_sym_GT_AMP;
	v->a[105765] = anon_sym_GT_PIPE;
	v->a[105766] = anon_sym_LT_AMP_DASH;
	v->a[105767] = anon_sym_GT_AMP_DASH;
	v->a[105768] = anon_sym_LT_LT;
	v->a[105769] = anon_sym_LT_LT_DASH;
	v->a[105770] = anon_sym_AMP;
	v->a[105771] = anon_sym_BQUOTE;
	v->a[105772] = anon_sym_SEMI;
	v->a[105773] = 17;
	v->a[105774] = actions(57);
	v->a[105775] = 1;
	v->a[105776] = sym_comment;
	v->a[105777] = actions(5334);
	v->a[105778] = 1;
	v->a[105779] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5289(v);
}

void	small_parse_table_5289(t_small_parse_table_array *v)
{
	v->a[105780] = actions(5336);
	v->a[105781] = 1;
	v->a[105782] = anon_sym_DOLLAR;
	v->a[105783] = actions(5340);
	v->a[105784] = 1;
	v->a[105785] = anon_sym_DQUOTE;
	v->a[105786] = actions(5344);
	v->a[105787] = 1;
	v->a[105788] = aux_sym_number_token1;
	v->a[105789] = actions(5346);
	v->a[105790] = 1;
	v->a[105791] = aux_sym_number_token2;
	v->a[105792] = actions(5348);
	v->a[105793] = 1;
	v->a[105794] = anon_sym_DOLLAR_LBRACE;
	v->a[105795] = actions(5350);
	v->a[105796] = 1;
	v->a[105797] = anon_sym_DOLLAR_LPAREN;
	v->a[105798] = actions(5352);
	v->a[105799] = 1;
	small_parse_table_5290(v);
}

/* EOF small_parse_table_1057.c */
