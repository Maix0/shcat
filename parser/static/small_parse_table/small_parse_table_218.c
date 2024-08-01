/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_218.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1090(t_small_parse_table_array *v)
{
	v->a[21800] = anon_sym_PLUS3;
	v->a[21801] = 13;
	v->a[21802] = actions(3);
	v->a[21803] = 1;
	v->a[21804] = sym_comment;
	v->a[21805] = actions(952);
	v->a[21806] = 1;
	v->a[21807] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21808] = actions(955);
	v->a[21809] = 1;
	v->a[21810] = anon_sym_DOLLAR;
	v->a[21811] = actions(958);
	v->a[21812] = 1;
	v->a[21813] = anon_sym_DQUOTE;
	v->a[21814] = actions(961);
	v->a[21815] = 1;
	v->a[21816] = anon_sym_DOLLAR_LBRACE;
	v->a[21817] = actions(964);
	v->a[21818] = 1;
	v->a[21819] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1091(v);
}

void	small_parse_table_1091(t_small_parse_table_array *v)
{
	v->a[21820] = actions(967);
	v->a[21821] = 1;
	v->a[21822] = anon_sym_BQUOTE;
	v->a[21823] = actions(970);
	v->a[21824] = 1;
	v->a[21825] = sym__bare_dollar;
	v->a[21826] = state(269);
	v->a[21827] = 1;
	v->a[21828] = aux_sym_command_repeat2;
	v->a[21829] = state(775);
	v->a[21830] = 1;
	v->a[21831] = sym_concatenation;
	v->a[21832] = actions(949);
	v->a[21833] = 3;
	v->a[21834] = sym_raw_string;
	v->a[21835] = sym_number;
	v->a[21836] = sym_word;
	v->a[21837] = state(600);
	v->a[21838] = 5;
	v->a[21839] = sym_arithmetic_expansion;
	small_parse_table_1092(v);
}

void	small_parse_table_1092(t_small_parse_table_array *v)
{
	v->a[21840] = sym_string;
	v->a[21841] = sym_simple_expansion;
	v->a[21842] = sym_expansion;
	v->a[21843] = sym_command_substitution;
	v->a[21844] = actions(455);
	v->a[21845] = 7;
	v->a[21846] = anon_sym_PIPE;
	v->a[21847] = anon_sym_AMP_AMP;
	v->a[21848] = anon_sym_PIPE_PIPE;
	v->a[21849] = anon_sym_LT;
	v->a[21850] = anon_sym_GT;
	v->a[21851] = anon_sym_GT_GT;
	v->a[21852] = anon_sym_LT_LT;
	v->a[21853] = 6;
	v->a[21854] = actions(3);
	v->a[21855] = 1;
	v->a[21856] = sym_comment;
	v->a[21857] = actions(975);
	v->a[21858] = 1;
	v->a[21859] = aux_sym_concatenation_token1;
	small_parse_table_1093(v);
}

void	small_parse_table_1093(t_small_parse_table_array *v)
{
	v->a[21860] = actions(978);
	v->a[21861] = 1;
	v->a[21862] = sym__concat;
	v->a[21863] = actions(981);
	v->a[21864] = 1;
	v->a[21865] = sym__bare_dollar;
	v->a[21866] = state(270);
	v->a[21867] = 1;
	v->a[21868] = aux_sym_concatenation_repeat1;
	v->a[21869] = actions(973);
	v->a[21870] = 20;
	v->a[21871] = anon_sym_PIPE;
	v->a[21872] = anon_sym_RPAREN;
	v->a[21873] = anon_sym_SEMI_SEMI;
	v->a[21874] = anon_sym_AMP_AMP;
	v->a[21875] = anon_sym_PIPE_PIPE;
	v->a[21876] = anon_sym_LT;
	v->a[21877] = anon_sym_GT;
	v->a[21878] = anon_sym_GT_GT;
	v->a[21879] = anon_sym_LT_LT;
	small_parse_table_1094(v);
}

void	small_parse_table_1094(t_small_parse_table_array *v)
{
	v->a[21880] = aux_sym_heredoc_redirect_token1;
	v->a[21881] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21882] = anon_sym_DOLLAR;
	v->a[21883] = anon_sym_DQUOTE;
	v->a[21884] = sym_raw_string;
	v->a[21885] = sym_number;
	v->a[21886] = anon_sym_DOLLAR_LBRACE;
	v->a[21887] = anon_sym_DOLLAR_LPAREN;
	v->a[21888] = anon_sym_BQUOTE;
	v->a[21889] = sym_word;
	v->a[21890] = anon_sym_SEMI;
	v->a[21891] = 6;
	v->a[21892] = actions(3);
	v->a[21893] = 1;
	v->a[21894] = sym_comment;
	v->a[21895] = actions(983);
	v->a[21896] = 1;
	v->a[21897] = aux_sym_concatenation_token1;
	v->a[21898] = actions(986);
	v->a[21899] = 1;
	small_parse_table_1095(v);
}

/* EOF small_parse_table_218.c */
