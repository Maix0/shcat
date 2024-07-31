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
	v->a[46600] = actions(1591);
	v->a[46601] = 1;
	v->a[46602] = aux_sym_heredoc_redirect_token1;
	v->a[46603] = state(648);
	v->a[46604] = 1;
	v->a[46605] = sym_terminator;
	v->a[46606] = actions(850);
	v->a[46607] = 2;
	v->a[46608] = anon_sym_LT_LT;
	v->a[46609] = anon_sym_LT_LT_DASH;
	v->a[46610] = actions(858);
	v->a[46611] = 2;
	v->a[46612] = anon_sym_SEMI_SEMI;
	v->a[46613] = anon_sym_SEMI;
	v->a[46614] = actions(909);
	v->a[46615] = 2;
	v->a[46616] = anon_sym_AMP_AMP;
	v->a[46617] = anon_sym_PIPE_PIPE;
	v->a[46618] = state(970);
	v->a[46619] = 3;
	small_parse_table_2331(v);
}

void	small_parse_table_2331(t_small_parse_table_array *v)
{
	v->a[46620] = sym_file_redirect;
	v->a[46621] = sym_heredoc_redirect;
	v->a[46622] = aux_sym_redirected_statement_repeat1;
	v->a[46623] = actions(1589);
	v->a[46624] = 7;
	v->a[46625] = anon_sym_LT;
	v->a[46626] = anon_sym_GT;
	v->a[46627] = anon_sym_GT_GT;
	v->a[46628] = anon_sym_LT_AMP;
	v->a[46629] = anon_sym_GT_AMP;
	v->a[46630] = anon_sym_GT_PIPE;
	v->a[46631] = anon_sym_LT_GT;
	v->a[46632] = 10;
	v->a[46633] = actions(3);
	v->a[46634] = 1;
	v->a[46635] = sym_comment;
	v->a[46636] = actions(746);
	v->a[46637] = 1;
	v->a[46638] = anon_sym_PIPE;
	v->a[46639] = actions(752);
	small_parse_table_2332(v);
}

void	small_parse_table_2332(t_small_parse_table_array *v)
{
	v->a[46640] = 1;
	v->a[46641] = anon_sym_SEMI;
	v->a[46642] = actions(1595);
	v->a[46643] = 1;
	v->a[46644] = aux_sym_heredoc_redirect_token1;
	v->a[46645] = state(515);
	v->a[46646] = 1;
	v->a[46647] = sym_terminator;
	v->a[46648] = actions(748);
	v->a[46649] = 2;
	v->a[46650] = anon_sym_AMP_AMP;
	v->a[46651] = anon_sym_PIPE_PIPE;
	v->a[46652] = actions(750);
	v->a[46653] = 2;
	v->a[46654] = anon_sym_LT_LT;
	v->a[46655] = anon_sym_LT_LT_DASH;
	v->a[46656] = actions(842);
	v->a[46657] = 2;
	v->a[46658] = anon_sym_esac;
	v->a[46659] = anon_sym_SEMI_SEMI;
	small_parse_table_2333(v);
}

void	small_parse_table_2333(t_small_parse_table_array *v)
{
	v->a[46660] = state(931);
	v->a[46661] = 3;
	v->a[46662] = sym_file_redirect;
	v->a[46663] = sym_heredoc_redirect;
	v->a[46664] = aux_sym_redirected_statement_repeat1;
	v->a[46665] = actions(1593);
	v->a[46666] = 7;
	v->a[46667] = anon_sym_LT;
	v->a[46668] = anon_sym_GT;
	v->a[46669] = anon_sym_GT_GT;
	v->a[46670] = anon_sym_LT_AMP;
	v->a[46671] = anon_sym_GT_AMP;
	v->a[46672] = anon_sym_GT_PIPE;
	v->a[46673] = anon_sym_LT_GT;
	v->a[46674] = 6;
	v->a[46675] = actions(3);
	v->a[46676] = 1;
	v->a[46677] = sym_comment;
	v->a[46678] = actions(1011);
	v->a[46679] = 1;
	small_parse_table_2334(v);
}

void	small_parse_table_2334(t_small_parse_table_array *v)
{
	v->a[46680] = sym_variable_name;
	v->a[46681] = actions(1666);
	v->a[46682] = 1;
	v->a[46683] = aux_sym_concatenation_token1;
	v->a[46684] = actions(1669);
	v->a[46685] = 1;
	v->a[46686] = sym__concat;
	v->a[46687] = state(845);
	v->a[46688] = 1;
	v->a[46689] = aux_sym_concatenation_repeat1;
	v->a[46690] = actions(1003);
	v->a[46691] = 16;
	v->a[46692] = anon_sym_LT;
	v->a[46693] = anon_sym_GT;
	v->a[46694] = anon_sym_GT_GT;
	v->a[46695] = anon_sym_LT_AMP;
	v->a[46696] = anon_sym_GT_AMP;
	v->a[46697] = anon_sym_GT_PIPE;
	v->a[46698] = anon_sym_LT_GT;
	v->a[46699] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2335(v);
}

/* EOF small_parse_table_466.c */
