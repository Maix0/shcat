/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_466.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2330(t_small_parse_table_array *v)
{
	v->a[46600] = state(5293);
	v->a[46601] = 9;
	v->a[46602] = sym_arithmetic_expansion;
	v->a[46603] = sym_brace_expression;
	v->a[46604] = sym_string;
	v->a[46605] = sym_translated_string;
	v->a[46606] = sym_number;
	v->a[46607] = sym_simple_expansion;
	v->a[46608] = sym_expansion;
	v->a[46609] = sym_command_substitution;
	v->a[46610] = sym_process_substitution;
	v->a[46611] = actions(2498);
	v->a[46612] = 16;
	v->a[46613] = anon_sym_PIPE_PIPE;
	v->a[46614] = anon_sym_AMP_AMP;
	v->a[46615] = anon_sym_PIPE;
	v->a[46616] = anon_sym_LT;
	v->a[46617] = anon_sym_GT;
	v->a[46618] = anon_sym_LT_LT;
	v->a[46619] = anon_sym_GT_GT;
	small_parse_table_2331(v);
}

void	small_parse_table_2331(t_small_parse_table_array *v)
{
	v->a[46620] = anon_sym_PIPE_AMP;
	v->a[46621] = anon_sym_AMP_GT;
	v->a[46622] = anon_sym_AMP_GT_GT;
	v->a[46623] = anon_sym_LT_AMP;
	v->a[46624] = anon_sym_GT_AMP;
	v->a[46625] = anon_sym_GT_PIPE;
	v->a[46626] = anon_sym_LT_AMP_DASH;
	v->a[46627] = anon_sym_GT_AMP_DASH;
	v->a[46628] = anon_sym_LT_LT_DASH;
	v->a[46629] = 21;
	v->a[46630] = actions(3);
	v->a[46631] = 1;
	v->a[46632] = sym_comment;
	v->a[46633] = actions(4078);
	v->a[46634] = 1;
	v->a[46635] = anon_sym_DOLLAR_LBRACK;
	v->a[46636] = actions(4080);
	v->a[46637] = 1;
	v->a[46638] = anon_sym_DOLLAR;
	v->a[46639] = actions(4084);
	small_parse_table_2332(v);
}

void	small_parse_table_2332(t_small_parse_table_array *v)
{
	v->a[46640] = 1;
	v->a[46641] = anon_sym_DQUOTE;
	v->a[46642] = actions(4086);
	v->a[46643] = 1;
	v->a[46644] = aux_sym_number_token1;
	v->a[46645] = actions(4088);
	v->a[46646] = 1;
	v->a[46647] = aux_sym_number_token2;
	v->a[46648] = actions(4090);
	v->a[46649] = 1;
	v->a[46650] = anon_sym_DOLLAR_LBRACE;
	v->a[46651] = actions(4092);
	v->a[46652] = 1;
	v->a[46653] = anon_sym_DOLLAR_LPAREN;
	v->a[46654] = actions(4094);
	v->a[46655] = 1;
	v->a[46656] = anon_sym_BQUOTE;
	v->a[46657] = actions(4096);
	v->a[46658] = 1;
	v->a[46659] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2333(v);
}

void	small_parse_table_2333(t_small_parse_table_array *v)
{
	v->a[46660] = actions(4102);
	v->a[46661] = 1;
	v->a[46662] = sym__brace_start;
	v->a[46663] = actions(5303);
	v->a[46664] = 1;
	v->a[46665] = sym__special_character;
	v->a[46666] = actions(5309);
	v->a[46667] = 1;
	v->a[46668] = sym_test_operator;
	v->a[46669] = state(4521);
	v->a[46670] = 1;
	v->a[46671] = aux_sym__literal_repeat1;
	v->a[46672] = state(5023);
	v->a[46673] = 1;
	v->a[46674] = sym_concatenation;
	v->a[46675] = actions(2496);
	v->a[46676] = 2;
	v->a[46677] = sym_file_descriptor;
	v->a[46678] = aux_sym_heredoc_redirect_token1;
	v->a[46679] = actions(4076);
	small_parse_table_2334(v);
}

void	small_parse_table_2334(t_small_parse_table_array *v)
{
	v->a[46680] = 2;
	v->a[46681] = anon_sym_LPAREN_LPAREN;
	v->a[46682] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46683] = actions(4098);
	v->a[46684] = 2;
	v->a[46685] = anon_sym_LT_LPAREN;
	v->a[46686] = anon_sym_GT_LPAREN;
	v->a[46687] = actions(5307);
	v->a[46688] = 3;
	v->a[46689] = sym_raw_string;
	v->a[46690] = sym_ansi_c_string;
	v->a[46691] = sym_word;
	v->a[46692] = state(5398);
	v->a[46693] = 9;
	v->a[46694] = sym_arithmetic_expansion;
	v->a[46695] = sym_brace_expression;
	v->a[46696] = sym_string;
	v->a[46697] = sym_translated_string;
	v->a[46698] = sym_number;
	v->a[46699] = sym_simple_expansion;
	small_parse_table_2335(v);
}

/* EOF small_parse_table_466.c */
