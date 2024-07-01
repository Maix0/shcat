/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_138.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_690(t_small_parse_table_array *v)
{
	v->a[13800] = 1;
	v->a[13801] = sym_comment;
	v->a[13802] = actions(9);
	v->a[13803] = 1;
	v->a[13804] = anon_sym_for;
	v->a[13805] = actions(13);
	v->a[13806] = 1;
	v->a[13807] = anon_sym_if;
	v->a[13808] = actions(15);
	v->a[13809] = 1;
	v->a[13810] = anon_sym_case;
	v->a[13811] = actions(17);
	v->a[13812] = 1;
	v->a[13813] = anon_sym_LPAREN;
	v->a[13814] = actions(19);
	v->a[13815] = 1;
	v->a[13816] = anon_sym_LBRACE;
	v->a[13817] = actions(45);
	v->a[13818] = 1;
	v->a[13819] = sym_word;
	small_parse_table_691(v);
}

void	small_parse_table_691(t_small_parse_table_array *v)
{
	v->a[13820] = actions(53);
	v->a[13821] = 1;
	v->a[13822] = anon_sym_BANG;
	v->a[13823] = actions(59);
	v->a[13824] = 1;
	v->a[13825] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13826] = actions(61);
	v->a[13827] = 1;
	v->a[13828] = anon_sym_DOLLAR;
	v->a[13829] = actions(63);
	v->a[13830] = 1;
	v->a[13831] = anon_sym_DQUOTE;
	v->a[13832] = actions(67);
	v->a[13833] = 1;
	v->a[13834] = anon_sym_DOLLAR_LBRACE;
	v->a[13835] = actions(69);
	v->a[13836] = 1;
	v->a[13837] = anon_sym_DOLLAR_LPAREN;
	v->a[13838] = actions(71);
	v->a[13839] = 1;
	small_parse_table_692(v);
}

void	small_parse_table_692(t_small_parse_table_array *v)
{
	v->a[13840] = anon_sym_BQUOTE;
	v->a[13841] = actions(73);
	v->a[13842] = 1;
	v->a[13843] = sym_file_descriptor;
	v->a[13844] = actions(75);
	v->a[13845] = 1;
	v->a[13846] = sym_variable_name;
	v->a[13847] = actions(264);
	v->a[13848] = 1;
	v->a[13849] = anon_sym_RBRACE;
	v->a[13850] = state(42);
	v->a[13851] = 1;
	v->a[13852] = aux_sym__terminated_statement;
	v->a[13853] = state(189);
	v->a[13854] = 1;
	v->a[13855] = sym_command_name;
	v->a[13856] = state(249);
	v->a[13857] = 1;
	v->a[13858] = sym_variable_assignment;
	v->a[13859] = state(650);
	small_parse_table_693(v);
}

void	small_parse_table_693(t_small_parse_table_array *v)
{
	v->a[13860] = 1;
	v->a[13861] = sym_concatenation;
	v->a[13862] = state(712);
	v->a[13863] = 1;
	v->a[13864] = sym_file_redirect;
	v->a[13865] = state(713);
	v->a[13866] = 1;
	v->a[13867] = aux_sym_command_repeat1;
	v->a[13868] = state(1236);
	v->a[13869] = 1;
	v->a[13870] = sym_pipeline;
	v->a[13871] = state(1333);
	v->a[13872] = 1;
	v->a[13873] = aux_sym_redirected_statement_repeat2;
	v->a[13874] = state(2103);
	v->a[13875] = 1;
	v->a[13876] = sym__statement_not_pipeline;
	v->a[13877] = actions(11);
	v->a[13878] = 2;
	v->a[13879] = anon_sym_while;
	small_parse_table_694(v);
}

void	small_parse_table_694(t_small_parse_table_array *v)
{
	v->a[13880] = anon_sym_until;
	v->a[13881] = actions(57);
	v->a[13882] = 2;
	v->a[13883] = anon_sym_LT_AMP_DASH;
	v->a[13884] = anon_sym_GT_AMP_DASH;
	v->a[13885] = actions(65);
	v->a[13886] = 2;
	v->a[13887] = sym_raw_string;
	v->a[13888] = sym_number;
	v->a[13889] = state(443);
	v->a[13890] = 5;
	v->a[13891] = sym_arithmetic_expansion;
	v->a[13892] = sym_string;
	v->a[13893] = sym_simple_expansion;
	v->a[13894] = sym_expansion;
	v->a[13895] = sym_command_substitution;
	v->a[13896] = actions(55);
	v->a[13897] = 6;
	v->a[13898] = anon_sym_LT;
	v->a[13899] = anon_sym_GT;
	small_parse_table_695(v);
}

/* EOF small_parse_table_138.c */
