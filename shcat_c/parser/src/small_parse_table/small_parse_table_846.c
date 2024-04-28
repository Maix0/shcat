/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_846.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4230(t_small_parse_table_array *v)
{
	v->a[84600] = sym_raw_string;
	v->a[84601] = sym_ansi_c_string;
	v->a[84602] = aux_sym_number_token1;
	v->a[84603] = aux_sym_number_token2;
	v->a[84604] = anon_sym_DOLLAR_LBRACE;
	v->a[84605] = anon_sym_DOLLAR_LPAREN;
	v->a[84606] = anon_sym_BQUOTE;
	v->a[84607] = anon_sym_DOLLAR_BQUOTE;
	v->a[84608] = anon_sym_LT_LPAREN;
	v->a[84609] = anon_sym_GT_LPAREN;
	v->a[84610] = sym_word;
	v->a[84611] = 3;
	v->a[84612] = actions(3);
	v->a[84613] = 1;
	v->a[84614] = sym_comment;
	v->a[84615] = actions(1338);
	v->a[84616] = 5;
	v->a[84617] = sym_file_descriptor;
	v->a[84618] = sym__concat;
	v->a[84619] = sym_test_operator;
	small_parse_table_4231(v);
}

void	small_parse_table_4231(t_small_parse_table_array *v)
{
	v->a[84620] = sym__brace_start;
	v->a[84621] = aux_sym_heredoc_redirect_token1;
	v->a[84622] = actions(1336);
	v->a[84623] = 39;
	v->a[84624] = anon_sym_LPAREN_LPAREN;
	v->a[84625] = anon_sym_SEMI;
	v->a[84626] = anon_sym_PIPE_PIPE;
	v->a[84627] = anon_sym_AMP_AMP;
	v->a[84628] = anon_sym_PIPE;
	v->a[84629] = anon_sym_AMP;
	v->a[84630] = anon_sym_LT;
	v->a[84631] = anon_sym_GT;
	v->a[84632] = anon_sym_LT_LT;
	v->a[84633] = anon_sym_GT_GT;
	v->a[84634] = anon_sym_SEMI_SEMI;
	v->a[84635] = anon_sym_SEMI_AMP;
	v->a[84636] = anon_sym_SEMI_SEMI_AMP;
	v->a[84637] = anon_sym_PIPE_AMP;
	v->a[84638] = anon_sym_AMP_GT;
	v->a[84639] = anon_sym_AMP_GT_GT;
	small_parse_table_4232(v);
}

void	small_parse_table_4232(t_small_parse_table_array *v)
{
	v->a[84640] = anon_sym_LT_AMP;
	v->a[84641] = anon_sym_GT_AMP;
	v->a[84642] = anon_sym_GT_PIPE;
	v->a[84643] = anon_sym_LT_AMP_DASH;
	v->a[84644] = anon_sym_GT_AMP_DASH;
	v->a[84645] = anon_sym_LT_LT_DASH;
	v->a[84646] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84647] = anon_sym_DOLLAR_LBRACK;
	v->a[84648] = aux_sym_concatenation_token1;
	v->a[84649] = anon_sym_DOLLAR;
	v->a[84650] = sym__special_character;
	v->a[84651] = anon_sym_DQUOTE;
	v->a[84652] = sym_raw_string;
	v->a[84653] = sym_ansi_c_string;
	v->a[84654] = aux_sym_number_token1;
	v->a[84655] = aux_sym_number_token2;
	v->a[84656] = anon_sym_DOLLAR_LBRACE;
	v->a[84657] = anon_sym_DOLLAR_LPAREN;
	v->a[84658] = anon_sym_BQUOTE;
	v->a[84659] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_4233(v);
}

void	small_parse_table_4233(t_small_parse_table_array *v)
{
	v->a[84660] = anon_sym_LT_LPAREN;
	v->a[84661] = anon_sym_GT_LPAREN;
	v->a[84662] = sym_word;
	v->a[84663] = 3;
	v->a[84664] = actions(3);
	v->a[84665] = 1;
	v->a[84666] = sym_comment;
	v->a[84667] = actions(1358);
	v->a[84668] = 5;
	v->a[84669] = sym_file_descriptor;
	v->a[84670] = sym__concat;
	v->a[84671] = sym_test_operator;
	v->a[84672] = sym__brace_start;
	v->a[84673] = aux_sym_heredoc_redirect_token1;
	v->a[84674] = actions(1356);
	v->a[84675] = 39;
	v->a[84676] = anon_sym_LPAREN_LPAREN;
	v->a[84677] = anon_sym_SEMI;
	v->a[84678] = anon_sym_PIPE_PIPE;
	v->a[84679] = anon_sym_AMP_AMP;
	small_parse_table_4234(v);
}

void	small_parse_table_4234(t_small_parse_table_array *v)
{
	v->a[84680] = anon_sym_PIPE;
	v->a[84681] = anon_sym_AMP;
	v->a[84682] = anon_sym_LT;
	v->a[84683] = anon_sym_GT;
	v->a[84684] = anon_sym_LT_LT;
	v->a[84685] = anon_sym_GT_GT;
	v->a[84686] = anon_sym_RPAREN;
	v->a[84687] = anon_sym_SEMI_SEMI;
	v->a[84688] = anon_sym_PIPE_AMP;
	v->a[84689] = anon_sym_AMP_GT;
	v->a[84690] = anon_sym_AMP_GT_GT;
	v->a[84691] = anon_sym_LT_AMP;
	v->a[84692] = anon_sym_GT_AMP;
	v->a[84693] = anon_sym_GT_PIPE;
	v->a[84694] = anon_sym_LT_AMP_DASH;
	v->a[84695] = anon_sym_GT_AMP_DASH;
	v->a[84696] = anon_sym_LT_LT_DASH;
	v->a[84697] = anon_sym_LT_LT_LT;
	v->a[84698] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84699] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_4235(v);
}

/* EOF small_parse_table_846.c */
