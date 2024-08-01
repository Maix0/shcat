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
	v->a[46600] = 11;
	v->a[46601] = anon_sym_PIPE;
	v->a[46602] = anon_sym_RPAREN;
	v->a[46603] = anon_sym_SEMI_SEMI;
	v->a[46604] = anon_sym_AMP_AMP;
	v->a[46605] = anon_sym_PIPE_PIPE;
	v->a[46606] = anon_sym_LT;
	v->a[46607] = anon_sym_GT;
	v->a[46608] = anon_sym_GT_GT;
	v->a[46609] = anon_sym_LT_LT;
	v->a[46610] = anon_sym_BQUOTE;
	v->a[46611] = anon_sym_SEMI;
	v->a[46612] = 5;
	v->a[46613] = actions(3);
	v->a[46614] = 1;
	v->a[46615] = sym_comment;
	v->a[46616] = actions(2093);
	v->a[46617] = 2;
	v->a[46618] = ts_builtin_sym_end;
	v->a[46619] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2331(v);
}

void	small_parse_table_2331(t_small_parse_table_array *v)
{
	v->a[46620] = state(996);
	v->a[46621] = 2;
	v->a[46622] = sym_file_redirect;
	v->a[46623] = aux_sym_redirected_statement_repeat2;
	v->a[46624] = actions(1872);
	v->a[46625] = 3;
	v->a[46626] = anon_sym_LT;
	v->a[46627] = anon_sym_GT;
	v->a[46628] = anon_sym_GT_GT;
	v->a[46629] = actions(2091);
	v->a[46630] = 6;
	v->a[46631] = anon_sym_PIPE;
	v->a[46632] = anon_sym_SEMI_SEMI;
	v->a[46633] = anon_sym_AMP_AMP;
	v->a[46634] = anon_sym_PIPE_PIPE;
	v->a[46635] = anon_sym_LT_LT;
	v->a[46636] = anon_sym_SEMI;
	v->a[46637] = 5;
	v->a[46638] = actions(3);
	v->a[46639] = 1;
	small_parse_table_2332(v);
}

void	small_parse_table_2332(t_small_parse_table_array *v)
{
	v->a[46640] = sym_comment;
	v->a[46641] = actions(1465);
	v->a[46642] = 1;
	v->a[46643] = aux_sym_concatenation_token1;
	v->a[46644] = actions(1467);
	v->a[46645] = 1;
	v->a[46646] = sym__concat;
	v->a[46647] = state(1027);
	v->a[46648] = 1;
	v->a[46649] = aux_sym_concatenation_repeat1;
	v->a[46650] = actions(2108);
	v->a[46651] = 10;
	v->a[46652] = aux_sym_heredoc_redirect_token1;
	v->a[46653] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46654] = anon_sym_DOLLAR;
	v->a[46655] = anon_sym_DQUOTE;
	v->a[46656] = sym_raw_string;
	v->a[46657] = sym_number;
	v->a[46658] = anon_sym_DOLLAR_LBRACE;
	v->a[46659] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2333(v);
}

void	small_parse_table_2333(t_small_parse_table_array *v)
{
	v->a[46660] = anon_sym_BQUOTE;
	v->a[46661] = sym_word;
	v->a[46662] = 5;
	v->a[46663] = actions(3);
	v->a[46664] = 1;
	v->a[46665] = sym_comment;
	v->a[46666] = actions(2093);
	v->a[46667] = 1;
	v->a[46668] = aux_sym_heredoc_redirect_token1;
	v->a[46669] = state(1017);
	v->a[46670] = 2;
	v->a[46671] = sym_file_redirect;
	v->a[46672] = aux_sym_redirected_statement_repeat2;
	v->a[46673] = actions(1868);
	v->a[46674] = 3;
	v->a[46675] = anon_sym_LT;
	v->a[46676] = anon_sym_GT;
	v->a[46677] = anon_sym_GT_GT;
	v->a[46678] = actions(2091);
	v->a[46679] = 7;
	small_parse_table_2334(v);
}

void	small_parse_table_2334(t_small_parse_table_array *v)
{
	v->a[46680] = anon_sym_PIPE;
	v->a[46681] = anon_sym_RPAREN;
	v->a[46682] = anon_sym_SEMI_SEMI;
	v->a[46683] = anon_sym_AMP_AMP;
	v->a[46684] = anon_sym_PIPE_PIPE;
	v->a[46685] = anon_sym_LT_LT;
	v->a[46686] = anon_sym_SEMI;
	v->a[46687] = 6;
	v->a[46688] = actions(3);
	v->a[46689] = 1;
	v->a[46690] = sym_comment;
	v->a[46691] = actions(2013);
	v->a[46692] = 1;
	v->a[46693] = sym_string_content;
	v->a[46694] = actions(2017);
	v->a[46695] = 1;
	v->a[46696] = sym_variable_name;
	v->a[46697] = actions(2110);
	v->a[46698] = 1;
	v->a[46699] = anon_sym_DQUOTE;
	small_parse_table_2335(v);
}

/* EOF small_parse_table_466.c */
