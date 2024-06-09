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
	v->a[46600] = state(426);
	v->a[46601] = 1;
	v->a[46602] = aux_sym_concatenation_repeat1;
	v->a[46603] = actions(1129);
	v->a[46604] = 29;
	v->a[46605] = anon_sym_PIPE;
	v->a[46606] = anon_sym_SEMI_SEMI;
	v->a[46607] = anon_sym_AMP_AMP;
	v->a[46608] = anon_sym_PIPE_PIPE;
	v->a[46609] = anon_sym_LT;
	v->a[46610] = anon_sym_GT;
	v->a[46611] = anon_sym_GT_GT;
	v->a[46612] = anon_sym_AMP_GT;
	v->a[46613] = anon_sym_AMP_GT_GT;
	v->a[46614] = anon_sym_LT_AMP;
	v->a[46615] = anon_sym_GT_AMP;
	v->a[46616] = anon_sym_GT_PIPE;
	v->a[46617] = anon_sym_LT_AMP_DASH;
	v->a[46618] = anon_sym_GT_AMP_DASH;
	v->a[46619] = anon_sym_LT_LT;
	small_parse_table_2331(v);
}

void	small_parse_table_2331(t_small_parse_table_array *v)
{
	v->a[46620] = anon_sym_LT_LT_DASH;
	v->a[46621] = aux_sym_heredoc_redirect_token1;
	v->a[46622] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46623] = anon_sym_AMP;
	v->a[46624] = anon_sym_DOLLAR;
	v->a[46625] = anon_sym_DQUOTE;
	v->a[46626] = sym_raw_string;
	v->a[46627] = aux_sym_number_token1;
	v->a[46628] = aux_sym_number_token2;
	v->a[46629] = anon_sym_DOLLAR_LBRACE;
	v->a[46630] = anon_sym_DOLLAR_LPAREN;
	v->a[46631] = anon_sym_BQUOTE;
	v->a[46632] = sym_word;
	v->a[46633] = anon_sym_SEMI;
	v->a[46634] = 6;
	v->a[46635] = actions(3);
	v->a[46636] = 1;
	v->a[46637] = sym_comment;
	v->a[46638] = actions(413);
	v->a[46639] = 1;
	small_parse_table_2332(v);
}

void	small_parse_table_2332(t_small_parse_table_array *v)
{
	v->a[46640] = sym_file_descriptor;
	v->a[46641] = actions(1672);
	v->a[46642] = 1;
	v->a[46643] = sym_variable_name;
	v->a[46644] = actions(1670);
	v->a[46645] = 2;
	v->a[46646] = aux_sym__simple_variable_name_token1;
	v->a[46647] = aux_sym__multiline_variable_name_token1;
	v->a[46648] = actions(1668);
	v->a[46649] = 9;
	v->a[46650] = anon_sym_BANG;
	v->a[46651] = anon_sym_DASH;
	v->a[46652] = anon_sym_STAR;
	v->a[46653] = anon_sym_QMARK;
	v->a[46654] = anon_sym_DOLLAR;
	v->a[46655] = anon_sym_POUND;
	v->a[46656] = anon_sym_AT;
	v->a[46657] = anon_sym_0;
	v->a[46658] = anon_sym__;
	v->a[46659] = actions(407);
	small_parse_table_2333(v);
}

void	small_parse_table_2333(t_small_parse_table_array *v)
{
	v->a[46660] = 20;
	v->a[46661] = anon_sym_PIPE;
	v->a[46662] = anon_sym_RPAREN;
	v->a[46663] = anon_sym_SEMI_SEMI;
	v->a[46664] = anon_sym_AMP_AMP;
	v->a[46665] = anon_sym_PIPE_PIPE;
	v->a[46666] = anon_sym_LT;
	v->a[46667] = anon_sym_GT;
	v->a[46668] = anon_sym_GT_GT;
	v->a[46669] = anon_sym_AMP_GT;
	v->a[46670] = anon_sym_AMP_GT_GT;
	v->a[46671] = anon_sym_LT_AMP;
	v->a[46672] = anon_sym_GT_AMP;
	v->a[46673] = anon_sym_GT_PIPE;
	v->a[46674] = anon_sym_LT_AMP_DASH;
	v->a[46675] = anon_sym_GT_AMP_DASH;
	v->a[46676] = anon_sym_LT_LT;
	v->a[46677] = anon_sym_LT_LT_DASH;
	v->a[46678] = aux_sym_heredoc_redirect_token1;
	v->a[46679] = anon_sym_AMP;
	small_parse_table_2334(v);
}

void	small_parse_table_2334(t_small_parse_table_array *v)
{
	v->a[46680] = anon_sym_SEMI;
	v->a[46681] = 17;
	v->a[46682] = actions(1404);
	v->a[46683] = 1;
	v->a[46684] = sym_comment;
	v->a[46685] = actions(1418);
	v->a[46686] = 1;
	v->a[46687] = anon_sym_AMP;
	v->a[46688] = actions(1420);
	v->a[46689] = 1;
	v->a[46690] = anon_sym_PIPE;
	v->a[46691] = actions(1422);
	v->a[46692] = 1;
	v->a[46693] = anon_sym_AMP_AMP;
	v->a[46694] = actions(1424);
	v->a[46695] = 1;
	v->a[46696] = anon_sym_PIPE_PIPE;
	v->a[46697] = actions(1426);
	v->a[46698] = 1;
	v->a[46699] = anon_sym_EQ;
	small_parse_table_2335(v);
}

/* EOF small_parse_table_466.c */
