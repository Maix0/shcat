/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2976.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14880(t_small_parse_table_array *v)
{
	v->a[297600] = 4;
	v->a[297601] = sym_arithmetic_expansion;
	v->a[297602] = sym_simple_expansion;
	v->a[297603] = sym_expansion;
	v->a[297604] = sym_command_substitution;
	v->a[297605] = 12;
	v->a[297606] = actions(3);
	v->a[297607] = 1;
	v->a[297608] = sym_comment;
	v->a[297609] = actions(13060);
	v->a[297610] = 1;
	v->a[297611] = anon_sym_DOLLAR_LBRACK;
	v->a[297612] = actions(13066);
	v->a[297613] = 1;
	v->a[297614] = sym_string_content;
	v->a[297615] = actions(13068);
	v->a[297616] = 1;
	v->a[297617] = anon_sym_DOLLAR_LBRACE;
	v->a[297618] = actions(13070);
	v->a[297619] = 1;
	small_parse_table_14881(v);
}

void	small_parse_table_14881(t_small_parse_table_array *v)
{
	v->a[297620] = anon_sym_DOLLAR_LPAREN;
	v->a[297621] = actions(13072);
	v->a[297622] = 1;
	v->a[297623] = anon_sym_BQUOTE;
	v->a[297624] = actions(13074);
	v->a[297625] = 1;
	v->a[297626] = anon_sym_DOLLAR_BQUOTE;
	v->a[297627] = actions(13426);
	v->a[297628] = 1;
	v->a[297629] = anon_sym_DOLLAR;
	v->a[297630] = actions(13428);
	v->a[297631] = 1;
	v->a[297632] = anon_sym_DQUOTE;
	v->a[297633] = state(5786);
	v->a[297634] = 1;
	v->a[297635] = aux_sym_string_repeat1;
	v->a[297636] = actions(13058);
	v->a[297637] = 2;
	v->a[297638] = anon_sym_LPAREN_LPAREN;
	v->a[297639] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_14882(v);
}

void	small_parse_table_14882(t_small_parse_table_array *v)
{
	v->a[297640] = state(6127);
	v->a[297641] = 4;
	v->a[297642] = sym_arithmetic_expansion;
	v->a[297643] = sym_simple_expansion;
	v->a[297644] = sym_expansion;
	v->a[297645] = sym_command_substitution;
	v->a[297646] = 3;
	v->a[297647] = actions(3);
	v->a[297648] = 1;
	v->a[297649] = sym_comment;
	v->a[297650] = actions(2074);
	v->a[297651] = 2;
	v->a[297652] = sym_file_descriptor;
	v->a[297653] = aux_sym_heredoc_redirect_token1;
	v->a[297654] = actions(2072);
	v->a[297655] = 13;
	v->a[297656] = anon_sym_PIPE_PIPE;
	v->a[297657] = anon_sym_AMP_AMP;
	v->a[297658] = anon_sym_LT;
	v->a[297659] = anon_sym_GT;
	small_parse_table_14883(v);
}

void	small_parse_table_14883(t_small_parse_table_array *v)
{
	v->a[297660] = anon_sym_GT_GT;
	v->a[297661] = anon_sym_AMP_GT;
	v->a[297662] = anon_sym_AMP_GT_GT;
	v->a[297663] = anon_sym_LT_AMP;
	v->a[297664] = anon_sym_GT_AMP;
	v->a[297665] = anon_sym_GT_PIPE;
	v->a[297666] = anon_sym_LT_AMP_DASH;
	v->a[297667] = anon_sym_GT_AMP_DASH;
	v->a[297668] = anon_sym_LT_LT_LT;
	v->a[297669] = 12;
	v->a[297670] = actions(3);
	v->a[297671] = 1;
	v->a[297672] = sym_comment;
	v->a[297673] = actions(13060);
	v->a[297674] = 1;
	v->a[297675] = anon_sym_DOLLAR_LBRACK;
	v->a[297676] = actions(13066);
	v->a[297677] = 1;
	v->a[297678] = sym_string_content;
	v->a[297679] = actions(13068);
	small_parse_table_14884(v);
}

void	small_parse_table_14884(t_small_parse_table_array *v)
{
	v->a[297680] = 1;
	v->a[297681] = anon_sym_DOLLAR_LBRACE;
	v->a[297682] = actions(13070);
	v->a[297683] = 1;
	v->a[297684] = anon_sym_DOLLAR_LPAREN;
	v->a[297685] = actions(13072);
	v->a[297686] = 1;
	v->a[297687] = anon_sym_BQUOTE;
	v->a[297688] = actions(13074);
	v->a[297689] = 1;
	v->a[297690] = anon_sym_DOLLAR_BQUOTE;
	v->a[297691] = actions(13430);
	v->a[297692] = 1;
	v->a[297693] = anon_sym_DOLLAR;
	v->a[297694] = actions(13432);
	v->a[297695] = 1;
	v->a[297696] = anon_sym_DQUOTE;
	v->a[297697] = state(5768);
	v->a[297698] = 1;
	v->a[297699] = aux_sym_string_repeat1;
	small_parse_table_14885(v);
}

/* EOF small_parse_table_2976.c */
