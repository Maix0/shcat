/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_226.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1130(t_small_parse_table_array *v)
{
	v->a[22600] = sym_comment;
	v->a[22601] = actions(857);
	v->a[22602] = 1;
	v->a[22603] = aux_sym_concatenation_token1;
	v->a[22604] = actions(859);
	v->a[22605] = 1;
	v->a[22606] = sym__concat;
	v->a[22607] = actions(911);
	v->a[22608] = 1;
	v->a[22609] = sym__bare_dollar;
	v->a[22610] = state(283);
	v->a[22611] = 1;
	v->a[22612] = aux_sym_concatenation_repeat1;
	v->a[22613] = actions(909);
	v->a[22614] = 20;
	v->a[22615] = anon_sym_PIPE;
	v->a[22616] = anon_sym_RPAREN;
	v->a[22617] = anon_sym_SEMI_SEMI;
	v->a[22618] = anon_sym_AMP_AMP;
	v->a[22619] = anon_sym_PIPE_PIPE;
	small_parse_table_1131(v);
}

void	small_parse_table_1131(t_small_parse_table_array *v)
{
	v->a[22620] = anon_sym_LT;
	v->a[22621] = anon_sym_GT;
	v->a[22622] = anon_sym_GT_GT;
	v->a[22623] = anon_sym_LT_LT;
	v->a[22624] = aux_sym_heredoc_redirect_token1;
	v->a[22625] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22626] = anon_sym_DOLLAR;
	v->a[22627] = anon_sym_DQUOTE;
	v->a[22628] = sym_raw_string;
	v->a[22629] = sym_number;
	v->a[22630] = anon_sym_DOLLAR_LBRACE;
	v->a[22631] = anon_sym_DOLLAR_LPAREN;
	v->a[22632] = anon_sym_BQUOTE;
	v->a[22633] = sym_word;
	v->a[22634] = anon_sym_SEMI;
	v->a[22635] = 6;
	v->a[22636] = actions(3);
	v->a[22637] = 1;
	v->a[22638] = sym_comment;
	v->a[22639] = actions(981);
	small_parse_table_1132(v);
}

void	small_parse_table_1132(t_small_parse_table_array *v)
{
	v->a[22640] = 1;
	v->a[22641] = sym__bare_dollar;
	v->a[22642] = actions(1019);
	v->a[22643] = 1;
	v->a[22644] = aux_sym_concatenation_token1;
	v->a[22645] = actions(1022);
	v->a[22646] = 1;
	v->a[22647] = sym__concat;
	v->a[22648] = state(290);
	v->a[22649] = 1;
	v->a[22650] = aux_sym_concatenation_repeat1;
	v->a[22651] = actions(973);
	v->a[22652] = 20;
	v->a[22653] = anon_sym_esac;
	v->a[22654] = anon_sym_PIPE;
	v->a[22655] = anon_sym_SEMI_SEMI;
	v->a[22656] = anon_sym_AMP_AMP;
	v->a[22657] = anon_sym_PIPE_PIPE;
	v->a[22658] = anon_sym_LT;
	v->a[22659] = anon_sym_GT;
	small_parse_table_1133(v);
}

void	small_parse_table_1133(t_small_parse_table_array *v)
{
	v->a[22660] = anon_sym_GT_GT;
	v->a[22661] = anon_sym_LT_LT;
	v->a[22662] = aux_sym_heredoc_redirect_token1;
	v->a[22663] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22664] = anon_sym_DOLLAR;
	v->a[22665] = anon_sym_DQUOTE;
	v->a[22666] = sym_raw_string;
	v->a[22667] = sym_number;
	v->a[22668] = anon_sym_DOLLAR_LBRACE;
	v->a[22669] = anon_sym_DOLLAR_LPAREN;
	v->a[22670] = anon_sym_BQUOTE;
	v->a[22671] = sym_word;
	v->a[22672] = anon_sym_SEMI;
	v->a[22673] = 6;
	v->a[22674] = actions(3);
	v->a[22675] = 1;
	v->a[22676] = sym_comment;
	v->a[22677] = actions(882);
	v->a[22678] = 1;
	v->a[22679] = aux_sym_concatenation_token1;
	small_parse_table_1134(v);
}

void	small_parse_table_1134(t_small_parse_table_array *v)
{
	v->a[22680] = actions(1025);
	v->a[22681] = 1;
	v->a[22682] = sym__concat;
	v->a[22683] = state(293);
	v->a[22684] = 1;
	v->a[22685] = aux_sym_concatenation_repeat1;
	v->a[22686] = actions(921);
	v->a[22687] = 2;
	v->a[22688] = sym_variable_name;
	v->a[22689] = ts_builtin_sym_end;
	v->a[22690] = actions(923);
	v->a[22691] = 19;
	v->a[22692] = anon_sym_PIPE;
	v->a[22693] = anon_sym_SEMI_SEMI;
	v->a[22694] = anon_sym_AMP_AMP;
	v->a[22695] = anon_sym_PIPE_PIPE;
	v->a[22696] = anon_sym_LT;
	v->a[22697] = anon_sym_GT;
	v->a[22698] = anon_sym_GT_GT;
	v->a[22699] = anon_sym_LT_LT;
	small_parse_table_1135(v);
}

/* EOF small_parse_table_226.c */
