/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2127.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10635(t_small_parse_table_array *v)
{
	v->a[212700] = actions(4092);
	v->a[212701] = 1;
	v->a[212702] = anon_sym_DOLLAR_LPAREN;
	v->a[212703] = actions(4102);
	v->a[212704] = 1;
	v->a[212705] = sym__brace_start;
	v->a[212706] = actions(9310);
	v->a[212707] = 1;
	v->a[212708] = anon_sym_DOLLAR_LBRACK;
	v->a[212709] = actions(9316);
	v->a[212710] = 1;
	v->a[212711] = anon_sym_DQUOTE;
	v->a[212712] = actions(9320);
	v->a[212713] = 1;
	v->a[212714] = anon_sym_DOLLAR_LBRACE;
	v->a[212715] = actions(9322);
	v->a[212716] = 1;
	v->a[212717] = anon_sym_BQUOTE;
	v->a[212718] = actions(9324);
	v->a[212719] = 1;
	small_parse_table_10636(v);
}

void	small_parse_table_10636(t_small_parse_table_array *v)
{
	v->a[212720] = anon_sym_DOLLAR_BQUOTE;
	v->a[212721] = actions(10108);
	v->a[212722] = 1;
	v->a[212723] = sym__special_character;
	v->a[212724] = actions(10114);
	v->a[212725] = 1;
	v->a[212726] = sym_word;
	v->a[212727] = actions(10118);
	v->a[212728] = 1;
	v->a[212729] = sym_test_operator;
	v->a[212730] = state(4500);
	v->a[212731] = 1;
	v->a[212732] = aux_sym__literal_repeat1;
	v->a[212733] = state(5029);
	v->a[212734] = 1;
	v->a[212735] = sym_concatenation;
	v->a[212736] = actions(9308);
	v->a[212737] = 2;
	v->a[212738] = anon_sym_LPAREN_LPAREN;
	v->a[212739] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_10637(v);
}

void	small_parse_table_10637(t_small_parse_table_array *v)
{
	v->a[212740] = actions(9326);
	v->a[212741] = 2;
	v->a[212742] = anon_sym_LT_LPAREN;
	v->a[212743] = anon_sym_GT_LPAREN;
	v->a[212744] = actions(10116);
	v->a[212745] = 2;
	v->a[212746] = sym_raw_string;
	v->a[212747] = sym_ansi_c_string;
	v->a[212748] = state(4760);
	v->a[212749] = 9;
	v->a[212750] = sym_arithmetic_expansion;
	v->a[212751] = sym_brace_expression;
	v->a[212752] = sym_string;
	v->a[212753] = sym_translated_string;
	v->a[212754] = sym_number;
	v->a[212755] = sym_simple_expansion;
	v->a[212756] = sym_expansion;
	v->a[212757] = sym_command_substitution;
	v->a[212758] = sym_process_substitution;
	v->a[212759] = 18;
	small_parse_table_10638(v);
}

void	small_parse_table_10638(t_small_parse_table_array *v)
{
	v->a[212760] = actions(3);
	v->a[212761] = 1;
	v->a[212762] = sym_comment;
	v->a[212763] = actions(1420);
	v->a[212764] = 1;
	v->a[212765] = aux_sym_number_token1;
	v->a[212766] = actions(1422);
	v->a[212767] = 1;
	v->a[212768] = aux_sym_number_token2;
	v->a[212769] = actions(1426);
	v->a[212770] = 1;
	v->a[212771] = anon_sym_DOLLAR_LPAREN;
	v->a[212772] = actions(1438);
	v->a[212773] = 1;
	v->a[212774] = sym__brace_start;
	v->a[212775] = actions(9094);
	v->a[212776] = 1;
	v->a[212777] = anon_sym_DOLLAR_LBRACK;
	v->a[212778] = actions(9098);
	v->a[212779] = 1;
	small_parse_table_10639(v);
}

void	small_parse_table_10639(t_small_parse_table_array *v)
{
	v->a[212780] = anon_sym_DQUOTE;
	v->a[212781] = actions(9102);
	v->a[212782] = 1;
	v->a[212783] = anon_sym_DOLLAR_LBRACE;
	v->a[212784] = actions(9104);
	v->a[212785] = 1;
	v->a[212786] = anon_sym_BQUOTE;
	v->a[212787] = actions(9106);
	v->a[212788] = 1;
	v->a[212789] = anon_sym_DOLLAR_BQUOTE;
	v->a[212790] = actions(10120);
	v->a[212791] = 1;
	v->a[212792] = sym_word;
	v->a[212793] = actions(10122);
	v->a[212794] = 1;
	v->a[212795] = anon_sym_DOLLAR;
	v->a[212796] = actions(10128);
	v->a[212797] = 1;
	v->a[212798] = sym__comment_word;
	v->a[212799] = actions(9092);
	small_parse_table_10640(v);
}

/* EOF small_parse_table_2127.c */
