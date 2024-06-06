/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_996.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4980(t_small_parse_table_array *v)
{
	v->a[99600] = anon_sym_AMP_GT;
	v->a[99601] = anon_sym_AMP_GT_GT;
	v->a[99602] = anon_sym_LT_AMP;
	v->a[99603] = anon_sym_GT_AMP;
	v->a[99604] = anon_sym_GT_PIPE;
	v->a[99605] = anon_sym_LT_AMP_DASH;
	v->a[99606] = anon_sym_GT_AMP_DASH;
	v->a[99607] = anon_sym_LT_LT;
	v->a[99608] = anon_sym_LT_LT_DASH;
	v->a[99609] = anon_sym_AMP;
	v->a[99610] = anon_sym_SEMI;
	v->a[99611] = 19;
	v->a[99612] = actions(3);
	v->a[99613] = 1;
	v->a[99614] = sym_comment;
	v->a[99615] = actions(2458);
	v->a[99616] = 1;
	v->a[99617] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99618] = actions(2460);
	v->a[99619] = 1;
	small_parse_table_4981(v);
}

void	small_parse_table_4981(t_small_parse_table_array *v)
{
	v->a[99620] = anon_sym_DOLLAR;
	v->a[99621] = actions(2462);
	v->a[99622] = 1;
	v->a[99623] = sym__special_character;
	v->a[99624] = actions(2464);
	v->a[99625] = 1;
	v->a[99626] = anon_sym_DQUOTE;
	v->a[99627] = actions(2466);
	v->a[99628] = 1;
	v->a[99629] = aux_sym_number_token1;
	v->a[99630] = actions(2468);
	v->a[99631] = 1;
	v->a[99632] = aux_sym_number_token2;
	v->a[99633] = actions(2470);
	v->a[99634] = 1;
	v->a[99635] = anon_sym_DOLLAR_LBRACE;
	v->a[99636] = actions(2472);
	v->a[99637] = 1;
	v->a[99638] = anon_sym_DOLLAR_LPAREN;
	v->a[99639] = actions(2474);
	small_parse_table_4982(v);
}

void	small_parse_table_4982(t_small_parse_table_array *v)
{
	v->a[99640] = 1;
	v->a[99641] = anon_sym_BQUOTE;
	v->a[99642] = actions(2476);
	v->a[99643] = 1;
	v->a[99644] = anon_sym_DOLLAR_BQUOTE;
	v->a[99645] = actions(2480);
	v->a[99646] = 1;
	v->a[99647] = sym_test_operator;
	v->a[99648] = actions(2482);
	v->a[99649] = 1;
	v->a[99650] = sym__brace_start;
	v->a[99651] = actions(5598);
	v->a[99652] = 1;
	v->a[99653] = aux_sym_heredoc_redirect_token1;
	v->a[99654] = state(2122);
	v->a[99655] = 1;
	v->a[99656] = aux_sym__heredoc_command;
	v->a[99657] = state(2852);
	v->a[99658] = 1;
	v->a[99659] = aux_sym__literal_repeat1;
	small_parse_table_4983(v);
}

void	small_parse_table_4983(t_small_parse_table_array *v)
{
	v->a[99660] = state(2882);
	v->a[99661] = 1;
	v->a[99662] = sym_concatenation;
	v->a[99663] = actions(2446);
	v->a[99664] = 2;
	v->a[99665] = sym_raw_string;
	v->a[99666] = sym_word;
	v->a[99667] = state(2716);
	v->a[99668] = 7;
	v->a[99669] = sym_arithmetic_expansion;
	v->a[99670] = sym_brace_expression;
	v->a[99671] = sym_string;
	v->a[99672] = sym_number;
	v->a[99673] = sym_simple_expansion;
	v->a[99674] = sym_expansion;
	v->a[99675] = sym_command_substitution;
	v->a[99676] = 11;
	v->a[99677] = actions(3);
	v->a[99678] = 1;
	v->a[99679] = sym_comment;
	small_parse_table_4984(v);
}

void	small_parse_table_4984(t_small_parse_table_array *v)
{
	v->a[99680] = actions(2939);
	v->a[99681] = 1;
	v->a[99682] = ts_builtin_sym_end;
	v->a[99683] = actions(2947);
	v->a[99684] = 1;
	v->a[99685] = aux_sym_heredoc_redirect_token1;
	v->a[99686] = actions(5604);
	v->a[99687] = 1;
	v->a[99688] = sym_file_descriptor;
	v->a[99689] = actions(2516);
	v->a[99690] = 2;
	v->a[99691] = anon_sym_PIPE;
	v->a[99692] = anon_sym_PIPE_AMP;
	v->a[99693] = actions(2943);
	v->a[99694] = 2;
	v->a[99695] = anon_sym_AMP_AMP;
	v->a[99696] = anon_sym_PIPE_PIPE;
	v->a[99697] = actions(2945);
	v->a[99698] = 2;
	v->a[99699] = anon_sym_LT_LT;
	small_parse_table_4985(v);
}

/* EOF small_parse_table_996.c */
