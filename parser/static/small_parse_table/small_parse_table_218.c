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
	v->a[21800] = anon_sym_PIPE_PIPE;
	v->a[21801] = anon_sym_LT;
	v->a[21802] = anon_sym_GT;
	v->a[21803] = anon_sym_GT_GT;
	v->a[21804] = anon_sym_AMP_GT;
	v->a[21805] = anon_sym_AMP_GT_GT;
	v->a[21806] = anon_sym_LT_AMP;
	v->a[21807] = anon_sym_GT_AMP;
	v->a[21808] = anon_sym_GT_PIPE;
	v->a[21809] = anon_sym_LT_AMP_DASH;
	v->a[21810] = anon_sym_GT_AMP_DASH;
	v->a[21811] = anon_sym_LT_LT;
	v->a[21812] = anon_sym_LT_LT_DASH;
	v->a[21813] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21814] = anon_sym_AMP;
	v->a[21815] = anon_sym_DOLLAR;
	v->a[21816] = sym__special_character;
	v->a[21817] = anon_sym_DQUOTE;
	v->a[21818] = sym_raw_string;
	v->a[21819] = aux_sym_number_token1;
	small_parse_table_1091(v);
}

void	small_parse_table_1091(t_small_parse_table_array *v)
{
	v->a[21820] = aux_sym_number_token2;
	v->a[21821] = anon_sym_DOLLAR_LBRACE;
	v->a[21822] = anon_sym_DOLLAR_LPAREN;
	v->a[21823] = anon_sym_BQUOTE;
	v->a[21824] = anon_sym_DOLLAR_BQUOTE;
	v->a[21825] = sym_word;
	v->a[21826] = anon_sym_SEMI;
	v->a[21827] = 29;
	v->a[21828] = actions(57);
	v->a[21829] = 1;
	v->a[21830] = sym_comment;
	v->a[21831] = actions(643);
	v->a[21832] = 1;
	v->a[21833] = anon_sym_LPAREN;
	v->a[21834] = actions(661);
	v->a[21835] = 1;
	v->a[21836] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21837] = actions(663);
	v->a[21838] = 1;
	v->a[21839] = anon_sym_DOLLAR;
	small_parse_table_1092(v);
}

void	small_parse_table_1092(t_small_parse_table_array *v)
{
	v->a[21840] = actions(667);
	v->a[21841] = 1;
	v->a[21842] = anon_sym_DQUOTE;
	v->a[21843] = actions(671);
	v->a[21844] = 1;
	v->a[21845] = aux_sym_number_token1;
	v->a[21846] = actions(673);
	v->a[21847] = 1;
	v->a[21848] = aux_sym_number_token2;
	v->a[21849] = actions(675);
	v->a[21850] = 1;
	v->a[21851] = anon_sym_DOLLAR_LBRACE;
	v->a[21852] = actions(677);
	v->a[21853] = 1;
	v->a[21854] = anon_sym_DOLLAR_LPAREN;
	v->a[21855] = actions(679);
	v->a[21856] = 1;
	v->a[21857] = anon_sym_BQUOTE;
	v->a[21858] = actions(681);
	v->a[21859] = 1;
	small_parse_table_1093(v);
}

void	small_parse_table_1093(t_small_parse_table_array *v)
{
	v->a[21860] = anon_sym_DOLLAR_BQUOTE;
	v->a[21861] = actions(685);
	v->a[21862] = 1;
	v->a[21863] = sym_variable_name;
	v->a[21864] = actions(687);
	v->a[21865] = 1;
	v->a[21866] = sym__brace_start;
	v->a[21867] = actions(2900);
	v->a[21868] = 1;
	v->a[21869] = sym_file_descriptor;
	v->a[21870] = actions(3044);
	v->a[21871] = 1;
	v->a[21872] = sym_word;
	v->a[21873] = actions(3046);
	v->a[21874] = 1;
	v->a[21875] = sym__special_character;
	v->a[21876] = state(444);
	v->a[21877] = 1;
	v->a[21878] = sym_command_name;
	v->a[21879] = state(1040);
	small_parse_table_1094(v);
}

void	small_parse_table_1094(t_small_parse_table_array *v)
{
	v->a[21880] = 1;
	v->a[21881] = aux_sym_command_repeat1;
	v->a[21882] = state(1597);
	v->a[21883] = 1;
	v->a[21884] = aux_sym__literal_repeat1;
	v->a[21885] = state(1625);
	v->a[21886] = 1;
	v->a[21887] = sym_concatenation;
	v->a[21888] = state(1682);
	v->a[21889] = 1;
	v->a[21890] = sym_variable_assignment;
	v->a[21891] = state(1995);
	v->a[21892] = 1;
	v->a[21893] = sym_file_redirect;
	v->a[21894] = state(2737);
	v->a[21895] = 1;
	v->a[21896] = sym_subshell;
	v->a[21897] = state(2738);
	v->a[21898] = 1;
	v->a[21899] = sym_command;
	small_parse_table_1095(v);
}

/* EOF small_parse_table_218.c */
