/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_806.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4030(t_small_parse_table_array *v)
{
	v->a[80600] = anon_sym_DQUOTE;
	v->a[80601] = actions(4556);
	v->a[80602] = 1;
	v->a[80603] = anon_sym_DOLLAR_LBRACE;
	v->a[80604] = actions(4558);
	v->a[80605] = 1;
	v->a[80606] = anon_sym_BQUOTE;
	v->a[80607] = actions(4560);
	v->a[80608] = 1;
	v->a[80609] = anon_sym_DOLLAR_BQUOTE;
	v->a[80610] = state(3393);
	v->a[80611] = 1;
	v->a[80612] = aux_sym__literal_repeat1;
	v->a[80613] = state(3942);
	v->a[80614] = 1;
	v->a[80615] = sym_last_case_item;
	v->a[80616] = actions(4358);
	v->a[80617] = 2;
	v->a[80618] = sym_test_operator;
	v->a[80619] = sym_raw_string;
	small_parse_table_4031(v);
}

void	small_parse_table_4031(t_small_parse_table_array *v)
{
	v->a[80620] = state(1812);
	v->a[80621] = 2;
	v->a[80622] = sym_case_item;
	v->a[80623] = aux_sym_case_statement_repeat1;
	v->a[80624] = state(3472);
	v->a[80625] = 2;
	v->a[80626] = sym_concatenation;
	v->a[80627] = sym__extglob_blob;
	v->a[80628] = state(3295);
	v->a[80629] = 7;
	v->a[80630] = sym_arithmetic_expansion;
	v->a[80631] = sym_brace_expression;
	v->a[80632] = sym_string;
	v->a[80633] = sym_number;
	v->a[80634] = sym_simple_expansion;
	v->a[80635] = sym_expansion;
	v->a[80636] = sym_command_substitution;
	v->a[80637] = 22;
	v->a[80638] = actions(57);
	v->a[80639] = 1;
	small_parse_table_4032(v);
}

void	small_parse_table_4032(t_small_parse_table_array *v)
{
	v->a[80640] = sym_comment;
	v->a[80641] = actions(4328);
	v->a[80642] = 1;
	v->a[80643] = sym_word;
	v->a[80644] = actions(4340);
	v->a[80645] = 1;
	v->a[80646] = anon_sym_DOLLAR;
	v->a[80647] = actions(4346);
	v->a[80648] = 1;
	v->a[80649] = aux_sym_number_token1;
	v->a[80650] = actions(4348);
	v->a[80651] = 1;
	v->a[80652] = aux_sym_number_token2;
	v->a[80653] = actions(4352);
	v->a[80654] = 1;
	v->a[80655] = anon_sym_DOLLAR_LPAREN;
	v->a[80656] = actions(4360);
	v->a[80657] = 1;
	v->a[80658] = sym_extglob_pattern;
	v->a[80659] = actions(4362);
	small_parse_table_4033(v);
}

void	small_parse_table_4033(t_small_parse_table_array *v)
{
	v->a[80660] = 1;
	v->a[80661] = sym__brace_start;
	v->a[80662] = actions(4548);
	v->a[80663] = 1;
	v->a[80664] = anon_sym_LPAREN;
	v->a[80665] = actions(4550);
	v->a[80666] = 1;
	v->a[80667] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80668] = actions(4552);
	v->a[80669] = 1;
	v->a[80670] = sym__special_character;
	v->a[80671] = actions(4554);
	v->a[80672] = 1;
	v->a[80673] = anon_sym_DQUOTE;
	v->a[80674] = actions(4556);
	v->a[80675] = 1;
	v->a[80676] = anon_sym_DOLLAR_LBRACE;
	v->a[80677] = actions(4558);
	v->a[80678] = 1;
	v->a[80679] = anon_sym_BQUOTE;
	small_parse_table_4034(v);
}

void	small_parse_table_4034(t_small_parse_table_array *v)
{
	v->a[80680] = actions(4560);
	v->a[80681] = 1;
	v->a[80682] = anon_sym_DOLLAR_BQUOTE;
	v->a[80683] = actions(4562);
	v->a[80684] = 1;
	v->a[80685] = anon_sym_esac;
	v->a[80686] = state(3393);
	v->a[80687] = 1;
	v->a[80688] = aux_sym__literal_repeat1;
	v->a[80689] = state(3828);
	v->a[80690] = 1;
	v->a[80691] = sym_last_case_item;
	v->a[80692] = actions(4358);
	v->a[80693] = 2;
	v->a[80694] = sym_test_operator;
	v->a[80695] = sym_raw_string;
	v->a[80696] = state(1752);
	v->a[80697] = 2;
	v->a[80698] = sym_case_item;
	v->a[80699] = aux_sym_case_statement_repeat1;
	small_parse_table_4035(v);
}

/* EOF small_parse_table_806.c */
