/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_7.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_35(t_small_parse_table_array *v)
{
	v->a[700] = actions(51);
	v->a[701] = 1;
	v->a[702] = anon_sym_else;
	v->a[703] = actions(53);
	v->a[704] = 1;
	v->a[705] = anon_sym_BANG;
	v->a[706] = actions(59);
	v->a[707] = 1;
	v->a[708] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[709] = actions(61);
	v->a[710] = 1;
	v->a[711] = anon_sym_DOLLAR;
	v->a[712] = actions(63);
	v->a[713] = 1;
	v->a[714] = anon_sym_DQUOTE;
	v->a[715] = actions(67);
	v->a[716] = 1;
	v->a[717] = anon_sym_DOLLAR_LBRACE;
	v->a[718] = actions(69);
	v->a[719] = 1;
	small_parse_table_36(v);
}

void	small_parse_table_36(t_small_parse_table_array *v)
{
	v->a[720] = anon_sym_DOLLAR_LPAREN;
	v->a[721] = actions(71);
	v->a[722] = 1;
	v->a[723] = anon_sym_BQUOTE;
	v->a[724] = actions(73);
	v->a[725] = 1;
	v->a[726] = sym_file_descriptor;
	v->a[727] = actions(75);
	v->a[728] = 1;
	v->a[729] = sym_variable_name;
	v->a[730] = actions(85);
	v->a[731] = 1;
	v->a[732] = anon_sym_fi;
	v->a[733] = state(23);
	v->a[734] = 1;
	v->a[735] = aux_sym__terminated_statement;
	v->a[736] = state(187);
	v->a[737] = 1;
	v->a[738] = sym_command_name;
	v->a[739] = state(288);
	small_parse_table_37(v);
}

void	small_parse_table_37(t_small_parse_table_array *v)
{
	v->a[740] = 1;
	v->a[741] = sym_variable_assignment;
	v->a[742] = state(647);
	v->a[743] = 1;
	v->a[744] = sym_concatenation;
	v->a[745] = state(736);
	v->a[746] = 1;
	v->a[747] = aux_sym_command_repeat1;
	v->a[748] = state(738);
	v->a[749] = 1;
	v->a[750] = sym_file_redirect;
	v->a[751] = state(1443);
	v->a[752] = 1;
	v->a[753] = sym_pipeline;
	v->a[754] = state(1460);
	v->a[755] = 1;
	v->a[756] = aux_sym_redirected_statement_repeat2;
	v->a[757] = state(2269);
	v->a[758] = 1;
	v->a[759] = sym__statement_not_pipeline;
	small_parse_table_38(v);
}

void	small_parse_table_38(t_small_parse_table_array *v)
{
	v->a[760] = state(2280);
	v->a[761] = 1;
	v->a[762] = sym_else_clause;
	v->a[763] = actions(11);
	v->a[764] = 2;
	v->a[765] = anon_sym_while;
	v->a[766] = anon_sym_until;
	v->a[767] = actions(57);
	v->a[768] = 2;
	v->a[769] = anon_sym_LT_AMP_DASH;
	v->a[770] = anon_sym_GT_AMP_DASH;
	v->a[771] = actions(65);
	v->a[772] = 2;
	v->a[773] = sym_raw_string;
	v->a[774] = sym_number;
	v->a[775] = state(2150);
	v->a[776] = 2;
	v->a[777] = sym_elif_clause;
	v->a[778] = aux_sym_if_statement_repeat1;
	v->a[779] = state(394);
	small_parse_table_39(v);
}

void	small_parse_table_39(t_small_parse_table_array *v)
{
	v->a[780] = 5;
	v->a[781] = sym_arithmetic_expansion;
	v->a[782] = sym_string;
	v->a[783] = sym_simple_expansion;
	v->a[784] = sym_expansion;
	v->a[785] = sym_command_substitution;
	v->a[786] = actions(55);
	v->a[787] = 8;
	v->a[788] = anon_sym_LT;
	v->a[789] = anon_sym_GT;
	v->a[790] = anon_sym_GT_GT;
	v->a[791] = anon_sym_AMP_GT;
	v->a[792] = anon_sym_AMP_GT_GT;
	v->a[793] = anon_sym_LT_AMP;
	v->a[794] = anon_sym_GT_AMP;
	v->a[795] = anon_sym_GT_PIPE;
	v->a[796] = state(1413);
	v->a[797] = 12;
	v->a[798] = sym_redirected_statement;
	v->a[799] = sym_for_statement;
	small_parse_table_40(v);
}

/* EOF small_parse_table_7.c */
