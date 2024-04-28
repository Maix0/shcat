/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1936.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9680(t_small_parse_table_array *v)
{
	v->a[193600] = sym_string;
	v->a[193601] = sym_translated_string;
	v->a[193602] = sym_number;
	v->a[193603] = sym_simple_expansion;
	v->a[193604] = sym_expansion;
	v->a[193605] = sym_command_substitution;
	v->a[193606] = sym_process_substitution;
	v->a[193607] = 21;
	v->a[193608] = actions(3);
	v->a[193609] = 1;
	v->a[193610] = sym_comment;
	v->a[193611] = actions(3729);
	v->a[193612] = 1;
	v->a[193613] = anon_sym_DOLLAR_LBRACK;
	v->a[193614] = actions(3731);
	v->a[193615] = 1;
	v->a[193616] = anon_sym_DOLLAR;
	v->a[193617] = actions(3733);
	v->a[193618] = 1;
	v->a[193619] = sym__special_character;
	small_parse_table_9681(v);
}

void	small_parse_table_9681(t_small_parse_table_array *v)
{
	v->a[193620] = actions(3735);
	v->a[193621] = 1;
	v->a[193622] = anon_sym_DQUOTE;
	v->a[193623] = actions(3737);
	v->a[193624] = 1;
	v->a[193625] = aux_sym_number_token1;
	v->a[193626] = actions(3739);
	v->a[193627] = 1;
	v->a[193628] = aux_sym_number_token2;
	v->a[193629] = actions(3741);
	v->a[193630] = 1;
	v->a[193631] = anon_sym_DOLLAR_LBRACE;
	v->a[193632] = actions(3743);
	v->a[193633] = 1;
	v->a[193634] = anon_sym_DOLLAR_LPAREN;
	v->a[193635] = actions(3745);
	v->a[193636] = 1;
	v->a[193637] = anon_sym_BQUOTE;
	v->a[193638] = actions(3747);
	v->a[193639] = 1;
	small_parse_table_9682(v);
}

void	small_parse_table_9682(t_small_parse_table_array *v)
{
	v->a[193640] = anon_sym_DOLLAR_BQUOTE;
	v->a[193641] = actions(3753);
	v->a[193642] = 1;
	v->a[193643] = sym_test_operator;
	v->a[193644] = actions(3755);
	v->a[193645] = 1;
	v->a[193646] = sym__brace_start;
	v->a[193647] = actions(8639);
	v->a[193648] = 1;
	v->a[193649] = aux_sym_heredoc_redirect_token1;
	v->a[193650] = state(3571);
	v->a[193651] = 1;
	v->a[193652] = aux_sym__heredoc_command;
	v->a[193653] = state(5351);
	v->a[193654] = 1;
	v->a[193655] = aux_sym__literal_repeat1;
	v->a[193656] = state(5456);
	v->a[193657] = 1;
	v->a[193658] = sym_concatenation;
	v->a[193659] = actions(3715);
	small_parse_table_9683(v);
}

void	small_parse_table_9683(t_small_parse_table_array *v)
{
	v->a[193660] = 2;
	v->a[193661] = anon_sym_LPAREN_LPAREN;
	v->a[193662] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[193663] = actions(3749);
	v->a[193664] = 2;
	v->a[193665] = anon_sym_LT_LPAREN;
	v->a[193666] = anon_sym_GT_LPAREN;
	v->a[193667] = actions(3713);
	v->a[193668] = 3;
	v->a[193669] = sym_raw_string;
	v->a[193670] = sym_ansi_c_string;
	v->a[193671] = sym_word;
	v->a[193672] = state(5062);
	v->a[193673] = 9;
	v->a[193674] = sym_arithmetic_expansion;
	v->a[193675] = sym_brace_expression;
	v->a[193676] = sym_string;
	v->a[193677] = sym_translated_string;
	v->a[193678] = sym_number;
	v->a[193679] = sym_simple_expansion;
	small_parse_table_9684(v);
}

void	small_parse_table_9684(t_small_parse_table_array *v)
{
	v->a[193680] = sym_expansion;
	v->a[193681] = sym_command_substitution;
	v->a[193682] = sym_process_substitution;
	v->a[193683] = 21;
	v->a[193684] = actions(71);
	v->a[193685] = 1;
	v->a[193686] = sym_comment;
	v->a[193687] = actions(8565);
	v->a[193688] = 1;
	v->a[193689] = sym_word;
	v->a[193690] = actions(8571);
	v->a[193691] = 1;
	v->a[193692] = anon_sym_DOLLAR_LBRACK;
	v->a[193693] = actions(8573);
	v->a[193694] = 1;
	v->a[193695] = anon_sym_DOLLAR;
	v->a[193696] = actions(8575);
	v->a[193697] = 1;
	v->a[193698] = sym__special_character;
	v->a[193699] = actions(8577);
	small_parse_table_9685(v);
}

/* EOF small_parse_table_1936.c */
