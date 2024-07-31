/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_386.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1930(t_small_parse_table_array *v)
{
	v->a[38600] = anon_sym_DOLLAR;
	v->a[38601] = anon_sym_DQUOTE;
	v->a[38602] = sym_raw_string;
	v->a[38603] = sym_number;
	v->a[38604] = anon_sym_DOLLAR_LBRACE;
	v->a[38605] = anon_sym_DOLLAR_LPAREN;
	v->a[38606] = sym_word;
	v->a[38607] = 6;
	v->a[38608] = actions(3);
	v->a[38609] = 1;
	v->a[38610] = sym_comment;
	v->a[38611] = actions(1001);
	v->a[38612] = 1;
	v->a[38613] = sym__bare_dollar;
	v->a[38614] = actions(1380);
	v->a[38615] = 1;
	v->a[38616] = aux_sym_concatenation_token1;
	v->a[38617] = actions(1449);
	v->a[38618] = 1;
	v->a[38619] = sym__concat;
	small_parse_table_1931(v);
}

void	small_parse_table_1931(t_small_parse_table_array *v)
{
	v->a[38620] = state(644);
	v->a[38621] = 1;
	v->a[38622] = aux_sym_concatenation_repeat1;
	v->a[38623] = actions(997);
	v->a[38624] = 21;
	v->a[38625] = anon_sym_PIPE;
	v->a[38626] = anon_sym_AMP_AMP;
	v->a[38627] = anon_sym_PIPE_PIPE;
	v->a[38628] = anon_sym_LT;
	v->a[38629] = anon_sym_GT;
	v->a[38630] = anon_sym_GT_GT;
	v->a[38631] = anon_sym_LT_AMP;
	v->a[38632] = anon_sym_GT_AMP;
	v->a[38633] = anon_sym_GT_PIPE;
	v->a[38634] = anon_sym_LT_GT;
	v->a[38635] = anon_sym_LT_LT;
	v->a[38636] = anon_sym_LT_LT_DASH;
	v->a[38637] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38638] = anon_sym_DOLLAR;
	v->a[38639] = anon_sym_DQUOTE;
	small_parse_table_1932(v);
}

void	small_parse_table_1932(t_small_parse_table_array *v)
{
	v->a[38640] = sym_raw_string;
	v->a[38641] = sym_number;
	v->a[38642] = anon_sym_DOLLAR_LBRACE;
	v->a[38643] = anon_sym_DOLLAR_LPAREN;
	v->a[38644] = anon_sym_BQUOTE;
	v->a[38645] = sym_word;
	v->a[38646] = 6;
	v->a[38647] = actions(3);
	v->a[38648] = 1;
	v->a[38649] = sym_comment;
	v->a[38650] = actions(1011);
	v->a[38651] = 1;
	v->a[38652] = sym__bare_dollar;
	v->a[38653] = actions(1451);
	v->a[38654] = 1;
	v->a[38655] = aux_sym_concatenation_token1;
	v->a[38656] = actions(1454);
	v->a[38657] = 1;
	v->a[38658] = sym__concat;
	v->a[38659] = state(644);
	small_parse_table_1933(v);
}

void	small_parse_table_1933(t_small_parse_table_array *v)
{
	v->a[38660] = 1;
	v->a[38661] = aux_sym_concatenation_repeat1;
	v->a[38662] = actions(1003);
	v->a[38663] = 21;
	v->a[38664] = anon_sym_PIPE;
	v->a[38665] = anon_sym_AMP_AMP;
	v->a[38666] = anon_sym_PIPE_PIPE;
	v->a[38667] = anon_sym_LT;
	v->a[38668] = anon_sym_GT;
	v->a[38669] = anon_sym_GT_GT;
	v->a[38670] = anon_sym_LT_AMP;
	v->a[38671] = anon_sym_GT_AMP;
	v->a[38672] = anon_sym_GT_PIPE;
	v->a[38673] = anon_sym_LT_GT;
	v->a[38674] = anon_sym_LT_LT;
	v->a[38675] = anon_sym_LT_LT_DASH;
	v->a[38676] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38677] = anon_sym_DOLLAR;
	v->a[38678] = anon_sym_DQUOTE;
	v->a[38679] = sym_raw_string;
	small_parse_table_1934(v);
}

void	small_parse_table_1934(t_small_parse_table_array *v)
{
	v->a[38680] = sym_number;
	v->a[38681] = anon_sym_DOLLAR_LBRACE;
	v->a[38682] = anon_sym_DOLLAR_LPAREN;
	v->a[38683] = anon_sym_BQUOTE;
	v->a[38684] = sym_word;
	v->a[38685] = 4;
	v->a[38686] = actions(3);
	v->a[38687] = 1;
	v->a[38688] = sym_comment;
	v->a[38689] = actions(1247);
	v->a[38690] = 1;
	v->a[38691] = anon_sym_BQUOTE;
	v->a[38692] = actions(1249);
	v->a[38693] = 1;
	v->a[38694] = sym_variable_name;
	v->a[38695] = actions(1245);
	v->a[38696] = 23;
	v->a[38697] = anon_sym_for;
	v->a[38698] = anon_sym_while;
	v->a[38699] = anon_sym_until;
	small_parse_table_1935(v);
}

/* EOF small_parse_table_386.c */
