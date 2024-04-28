/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1536.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7680(t_small_parse_table_array *v)
{
	v->a[153600] = actions(4370);
	v->a[153601] = 12;
	v->a[153602] = anon_sym_PIPE;
	v->a[153603] = anon_sym_LT;
	v->a[153604] = anon_sym_GT;
	v->a[153605] = anon_sym_LT_LT;
	v->a[153606] = anon_sym_AMP_GT;
	v->a[153607] = anon_sym_LT_AMP;
	v->a[153608] = anon_sym_GT_AMP;
	v->a[153609] = anon_sym_DOLLAR;
	v->a[153610] = aux_sym_number_token1;
	v->a[153611] = aux_sym_number_token2;
	v->a[153612] = anon_sym_DOLLAR_LPAREN;
	v->a[153613] = sym_word;
	v->a[153614] = actions(4372);
	v->a[153615] = 26;
	v->a[153616] = sym_file_descriptor;
	v->a[153617] = sym_variable_name;
	v->a[153618] = sym_test_operator;
	v->a[153619] = sym__brace_start;
	small_parse_table_7681(v);
}

void	small_parse_table_7681(t_small_parse_table_array *v)
{
	v->a[153620] = anon_sym_LPAREN_LPAREN;
	v->a[153621] = anon_sym_PIPE_PIPE;
	v->a[153622] = anon_sym_AMP_AMP;
	v->a[153623] = anon_sym_GT_GT;
	v->a[153624] = anon_sym_PIPE_AMP;
	v->a[153625] = anon_sym_AMP_GT_GT;
	v->a[153626] = anon_sym_GT_PIPE;
	v->a[153627] = anon_sym_LT_AMP_DASH;
	v->a[153628] = anon_sym_GT_AMP_DASH;
	v->a[153629] = anon_sym_LT_LT_DASH;
	v->a[153630] = anon_sym_LT_LT_LT;
	v->a[153631] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[153632] = anon_sym_DOLLAR_LBRACK;
	v->a[153633] = sym__special_character;
	v->a[153634] = anon_sym_DQUOTE;
	v->a[153635] = sym_raw_string;
	v->a[153636] = sym_ansi_c_string;
	v->a[153637] = anon_sym_DOLLAR_LBRACE;
	v->a[153638] = anon_sym_BQUOTE;
	v->a[153639] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_7682(v);
}

void	small_parse_table_7682(t_small_parse_table_array *v)
{
	v->a[153640] = anon_sym_LT_LPAREN;
	v->a[153641] = anon_sym_GT_LPAREN;
	v->a[153642] = 3;
	v->a[153643] = actions(71);
	v->a[153644] = 1;
	v->a[153645] = sym_comment;
	v->a[153646] = actions(1340);
	v->a[153647] = 13;
	v->a[153648] = anon_sym_PIPE;
	v->a[153649] = anon_sym_LT;
	v->a[153650] = anon_sym_GT;
	v->a[153651] = anon_sym_LT_LT;
	v->a[153652] = anon_sym_AMP_GT;
	v->a[153653] = anon_sym_LT_AMP;
	v->a[153654] = anon_sym_GT_AMP;
	v->a[153655] = anon_sym_DOLLAR;
	v->a[153656] = aux_sym_number_token1;
	v->a[153657] = aux_sym_number_token2;
	v->a[153658] = anon_sym_DOLLAR_LPAREN;
	v->a[153659] = anon_sym_BQUOTE;
	small_parse_table_7683(v);
}

void	small_parse_table_7683(t_small_parse_table_array *v)
{
	v->a[153660] = sym_word;
	v->a[153661] = actions(1342);
	v->a[153662] = 25;
	v->a[153663] = sym_file_descriptor;
	v->a[153664] = sym__concat;
	v->a[153665] = sym_test_operator;
	v->a[153666] = sym__brace_start;
	v->a[153667] = anon_sym_LPAREN_LPAREN;
	v->a[153668] = anon_sym_PIPE_PIPE;
	v->a[153669] = anon_sym_AMP_AMP;
	v->a[153670] = anon_sym_GT_GT;
	v->a[153671] = anon_sym_PIPE_AMP;
	v->a[153672] = anon_sym_AMP_GT_GT;
	v->a[153673] = anon_sym_GT_PIPE;
	v->a[153674] = anon_sym_LT_AMP_DASH;
	v->a[153675] = anon_sym_GT_AMP_DASH;
	v->a[153676] = anon_sym_LT_LT_DASH;
	v->a[153677] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[153678] = anon_sym_DOLLAR_LBRACK;
	v->a[153679] = aux_sym_concatenation_token1;
	small_parse_table_7684(v);
}

void	small_parse_table_7684(t_small_parse_table_array *v)
{
	v->a[153680] = sym__special_character;
	v->a[153681] = anon_sym_DQUOTE;
	v->a[153682] = sym_raw_string;
	v->a[153683] = sym_ansi_c_string;
	v->a[153684] = anon_sym_DOLLAR_LBRACE;
	v->a[153685] = anon_sym_DOLLAR_BQUOTE;
	v->a[153686] = anon_sym_LT_LPAREN;
	v->a[153687] = anon_sym_GT_LPAREN;
	v->a[153688] = 3;
	v->a[153689] = actions(71);
	v->a[153690] = 1;
	v->a[153691] = sym_comment;
	v->a[153692] = actions(1312);
	v->a[153693] = 13;
	v->a[153694] = anon_sym_PIPE;
	v->a[153695] = anon_sym_LT;
	v->a[153696] = anon_sym_GT;
	v->a[153697] = anon_sym_LT_LT;
	v->a[153698] = anon_sym_AMP_GT;
	v->a[153699] = anon_sym_LT_AMP;
	small_parse_table_7685(v);
}

/* EOF small_parse_table_1536.c */
