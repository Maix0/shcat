/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_407.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2035(t_small_parse_table_array *v)
{
	v->a[40700] = actions(25);
	v->a[40701] = 1;
	v->a[40702] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40703] = actions(27);
	v->a[40704] = 1;
	v->a[40705] = anon_sym_DOLLAR;
	v->a[40706] = actions(29);
	v->a[40707] = 1;
	v->a[40708] = anon_sym_DQUOTE;
	v->a[40709] = actions(33);
	v->a[40710] = 1;
	v->a[40711] = anon_sym_DOLLAR_LBRACE;
	v->a[40712] = actions(35);
	v->a[40713] = 1;
	v->a[40714] = anon_sym_DOLLAR_LPAREN;
	v->a[40715] = actions(37);
	v->a[40716] = 1;
	v->a[40717] = anon_sym_BQUOTE;
	v->a[40718] = actions(359);
	v->a[40719] = 1;
	small_parse_table_2036(v);
}

void	small_parse_table_2036(t_small_parse_table_array *v)
{
	v->a[40720] = sym_variable_name;
	v->a[40721] = actions(1164);
	v->a[40722] = 1;
	v->a[40723] = sym_file_descriptor;
	v->a[40724] = state(176);
	v->a[40725] = 1;
	v->a[40726] = sym_command_name;
	v->a[40727] = state(583);
	v->a[40728] = 1;
	v->a[40729] = sym_concatenation;
	v->a[40730] = state(1218);
	v->a[40731] = 1;
	v->a[40732] = sym_file_redirect;
	v->a[40733] = state(1055);
	v->a[40734] = 2;
	v->a[40735] = sym_variable_assignment;
	v->a[40736] = aux_sym_command_repeat1;
	v->a[40737] = actions(31);
	v->a[40738] = 3;
	v->a[40739] = sym_raw_string;
	small_parse_table_2037(v);
}

void	small_parse_table_2037(t_small_parse_table_array *v)
{
	v->a[40740] = sym_number;
	v->a[40741] = sym_word;
	v->a[40742] = state(345);
	v->a[40743] = 5;
	v->a[40744] = sym_arithmetic_expansion;
	v->a[40745] = sym_string;
	v->a[40746] = sym_simple_expansion;
	v->a[40747] = sym_expansion;
	v->a[40748] = sym_command_substitution;
	v->a[40749] = actions(1162);
	v->a[40750] = 7;
	v->a[40751] = anon_sym_LT;
	v->a[40752] = anon_sym_GT;
	v->a[40753] = anon_sym_GT_GT;
	v->a[40754] = anon_sym_LT_AMP;
	v->a[40755] = anon_sym_GT_AMP;
	v->a[40756] = anon_sym_GT_PIPE;
	v->a[40757] = anon_sym_LT_GT;
	v->a[40758] = 16;
	v->a[40759] = actions(3);
	small_parse_table_2038(v);
}

void	small_parse_table_2038(t_small_parse_table_array *v)
{
	v->a[40760] = 1;
	v->a[40761] = sym_comment;
	v->a[40762] = actions(55);
	v->a[40763] = 1;
	v->a[40764] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40765] = actions(57);
	v->a[40766] = 1;
	v->a[40767] = anon_sym_DOLLAR;
	v->a[40768] = actions(59);
	v->a[40769] = 1;
	v->a[40770] = anon_sym_DQUOTE;
	v->a[40771] = actions(63);
	v->a[40772] = 1;
	v->a[40773] = anon_sym_DOLLAR_LBRACE;
	v->a[40774] = actions(65);
	v->a[40775] = 1;
	v->a[40776] = anon_sym_DOLLAR_LPAREN;
	v->a[40777] = actions(67);
	v->a[40778] = 1;
	v->a[40779] = anon_sym_BQUOTE;
	small_parse_table_2039(v);
}

void	small_parse_table_2039(t_small_parse_table_array *v)
{
	v->a[40780] = actions(359);
	v->a[40781] = 1;
	v->a[40782] = sym_variable_name;
	v->a[40783] = actions(1164);
	v->a[40784] = 1;
	v->a[40785] = sym_file_descriptor;
	v->a[40786] = state(292);
	v->a[40787] = 1;
	v->a[40788] = sym_command_name;
	v->a[40789] = state(584);
	v->a[40790] = 1;
	v->a[40791] = sym_concatenation;
	v->a[40792] = state(1218);
	v->a[40793] = 1;
	v->a[40794] = sym_file_redirect;
	v->a[40795] = state(1055);
	v->a[40796] = 2;
	v->a[40797] = sym_variable_assignment;
	v->a[40798] = aux_sym_command_repeat1;
	v->a[40799] = actions(353);
	small_parse_table_2040(v);
}

/* EOF small_parse_table_407.c */
