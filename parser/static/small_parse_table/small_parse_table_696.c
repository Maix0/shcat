/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_696.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3480(t_small_parse_table_array *v)
{
	v->a[69600] = sym_word;
	v->a[69601] = state(1424);
	v->a[69602] = 5;
	v->a[69603] = sym_arithmetic_expansion;
	v->a[69604] = sym_string;
	v->a[69605] = sym_simple_expansion;
	v->a[69606] = sym_expansion;
	v->a[69607] = sym_command_substitution;
	v->a[69608] = 9;
	v->a[69609] = actions(501);
	v->a[69610] = 1;
	v->a[69611] = sym_comment;
	v->a[69612] = actions(1960);
	v->a[69613] = 1;
	v->a[69614] = anon_sym_PIPE;
	v->a[69615] = actions(2766);
	v->a[69616] = 1;
	v->a[69617] = anon_sym_LT_LT;
	v->a[69618] = actions(2769);
	v->a[69619] = 1;
	small_parse_table_3481(v);
}

void	small_parse_table_3481(t_small_parse_table_array *v)
{
	v->a[69620] = anon_sym_LT_LT_DASH;
	v->a[69621] = actions(2772);
	v->a[69622] = 1;
	v->a[69623] = sym_file_descriptor;
	v->a[69624] = actions(1968);
	v->a[69625] = 2;
	v->a[69626] = anon_sym_AMP_AMP;
	v->a[69627] = anon_sym_PIPE_PIPE;
	v->a[69628] = actions(2760);
	v->a[69629] = 2;
	v->a[69630] = anon_sym_LT;
	v->a[69631] = anon_sym_GT;
	v->a[69632] = state(1392);
	v->a[69633] = 3;
	v->a[69634] = sym_file_redirect;
	v->a[69635] = sym_heredoc_redirect;
	v->a[69636] = aux_sym_redirected_statement_repeat1;
	v->a[69637] = actions(2763);
	v->a[69638] = 5;
	v->a[69639] = anon_sym_GT_GT;
	small_parse_table_3482(v);
}

void	small_parse_table_3482(t_small_parse_table_array *v)
{
	v->a[69640] = anon_sym_LT_AMP;
	v->a[69641] = anon_sym_GT_AMP;
	v->a[69642] = anon_sym_GT_PIPE;
	v->a[69643] = anon_sym_LT_GT;
	v->a[69644] = 7;
	v->a[69645] = actions(3);
	v->a[69646] = 1;
	v->a[69647] = sym_comment;
	v->a[69648] = actions(2427);
	v->a[69649] = 1;
	v->a[69650] = aux_sym_heredoc_redirect_token1;
	v->a[69651] = actions(2429);
	v->a[69652] = 1;
	v->a[69653] = sym_file_descriptor;
	v->a[69654] = actions(790);
	v->a[69655] = 2;
	v->a[69656] = anon_sym_LT_LT;
	v->a[69657] = anon_sym_LT_LT_DASH;
	v->a[69658] = actions(1328);
	v->a[69659] = 2;
	small_parse_table_3483(v);
}

void	small_parse_table_3483(t_small_parse_table_array *v)
{
	v->a[69660] = anon_sym_AMP_AMP;
	v->a[69661] = anon_sym_PIPE_PIPE;
	v->a[69662] = state(1353);
	v->a[69663] = 3;
	v->a[69664] = sym_file_redirect;
	v->a[69665] = sym_heredoc_redirect;
	v->a[69666] = aux_sym_redirected_statement_repeat1;
	v->a[69667] = actions(2425);
	v->a[69668] = 7;
	v->a[69669] = anon_sym_LT;
	v->a[69670] = anon_sym_GT;
	v->a[69671] = anon_sym_GT_GT;
	v->a[69672] = anon_sym_LT_AMP;
	v->a[69673] = anon_sym_GT_AMP;
	v->a[69674] = anon_sym_GT_PIPE;
	v->a[69675] = anon_sym_LT_GT;
	v->a[69676] = 10;
	v->a[69677] = actions(3);
	v->a[69678] = 1;
	v->a[69679] = sym_comment;
	small_parse_table_3484(v);
}

void	small_parse_table_3484(t_small_parse_table_array *v)
{
	v->a[69680] = actions(2331);
	v->a[69681] = 1;
	v->a[69682] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69683] = actions(2335);
	v->a[69684] = 1;
	v->a[69685] = anon_sym_DQUOTE;
	v->a[69686] = actions(2337);
	v->a[69687] = 1;
	v->a[69688] = anon_sym_DOLLAR_LBRACE;
	v->a[69689] = actions(2339);
	v->a[69690] = 1;
	v->a[69691] = anon_sym_DOLLAR_LPAREN;
	v->a[69692] = actions(2341);
	v->a[69693] = 1;
	v->a[69694] = anon_sym_BQUOTE;
	v->a[69695] = actions(2567);
	v->a[69696] = 1;
	v->a[69697] = anon_sym_DOLLAR;
	v->a[69698] = state(205);
	v->a[69699] = 2;
	small_parse_table_3485(v);
}

/* EOF small_parse_table_696.c */
