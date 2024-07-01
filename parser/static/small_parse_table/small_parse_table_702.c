/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_702.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3510(t_small_parse_table_array *v)
{
	v->a[70200] = sym_expansion;
	v->a[70201] = sym_command_substitution;
	v->a[70202] = 5;
	v->a[70203] = actions(3);
	v->a[70204] = 1;
	v->a[70205] = sym_comment;
	v->a[70206] = actions(2758);
	v->a[70207] = 1;
	v->a[70208] = aux_sym_concatenation_token1;
	v->a[70209] = actions(2761);
	v->a[70210] = 1;
	v->a[70211] = sym__concat;
	v->a[70212] = state(1390);
	v->a[70213] = 1;
	v->a[70214] = aux_sym_concatenation_repeat1;
	v->a[70215] = actions(1088);
	v->a[70216] = 13;
	v->a[70217] = anon_sym_SEMI_SEMI;
	v->a[70218] = aux_sym_heredoc_redirect_token1;
	v->a[70219] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3511(v);
}

void	small_parse_table_3511(t_small_parse_table_array *v)
{
	v->a[70220] = anon_sym_AMP;
	v->a[70221] = anon_sym_DOLLAR;
	v->a[70222] = anon_sym_DQUOTE;
	v->a[70223] = sym_raw_string;
	v->a[70224] = sym_number;
	v->a[70225] = anon_sym_DOLLAR_LBRACE;
	v->a[70226] = anon_sym_DOLLAR_LPAREN;
	v->a[70227] = anon_sym_BQUOTE;
	v->a[70228] = sym_word;
	v->a[70229] = anon_sym_SEMI;
	v->a[70230] = 3;
	v->a[70231] = actions(664);
	v->a[70232] = 1;
	v->a[70233] = sym_comment;
	v->a[70234] = actions(844);
	v->a[70235] = 4;
	v->a[70236] = anon_sym_PIPE;
	v->a[70237] = anon_sym_LT;
	v->a[70238] = anon_sym_GT;
	v->a[70239] = anon_sym_LT_LT;
	small_parse_table_3512(v);
}

void	small_parse_table_3512(t_small_parse_table_array *v)
{
	v->a[70240] = actions(846);
	v->a[70241] = 12;
	v->a[70242] = sym_file_descriptor;
	v->a[70243] = sym__concat;
	v->a[70244] = sym_variable_name;
	v->a[70245] = anon_sym_AMP_AMP;
	v->a[70246] = anon_sym_PIPE_PIPE;
	v->a[70247] = anon_sym_GT_GT;
	v->a[70248] = anon_sym_LT_AMP;
	v->a[70249] = anon_sym_GT_AMP;
	v->a[70250] = anon_sym_GT_PIPE;
	v->a[70251] = anon_sym_LT_GT;
	v->a[70252] = anon_sym_LT_LT_DASH;
	v->a[70253] = aux_sym_concatenation_token1;
	v->a[70254] = 3;
	v->a[70255] = actions(664);
	v->a[70256] = 1;
	v->a[70257] = sym_comment;
	v->a[70258] = actions(813);
	v->a[70259] = 4;
	small_parse_table_3513(v);
}

void	small_parse_table_3513(t_small_parse_table_array *v)
{
	v->a[70260] = anon_sym_PIPE;
	v->a[70261] = anon_sym_LT;
	v->a[70262] = anon_sym_GT;
	v->a[70263] = anon_sym_LT_LT;
	v->a[70264] = actions(815);
	v->a[70265] = 12;
	v->a[70266] = sym_file_descriptor;
	v->a[70267] = sym__concat;
	v->a[70268] = sym_variable_name;
	v->a[70269] = anon_sym_AMP_AMP;
	v->a[70270] = anon_sym_PIPE_PIPE;
	v->a[70271] = anon_sym_GT_GT;
	v->a[70272] = anon_sym_LT_AMP;
	v->a[70273] = anon_sym_GT_AMP;
	v->a[70274] = anon_sym_GT_PIPE;
	v->a[70275] = anon_sym_LT_GT;
	v->a[70276] = anon_sym_LT_LT_DASH;
	v->a[70277] = aux_sym_concatenation_token1;
	v->a[70278] = 3;
	v->a[70279] = actions(664);
	small_parse_table_3514(v);
}

void	small_parse_table_3514(t_small_parse_table_array *v)
{
	v->a[70280] = 1;
	v->a[70281] = sym_comment;
	v->a[70282] = actions(793);
	v->a[70283] = 4;
	v->a[70284] = anon_sym_PIPE;
	v->a[70285] = anon_sym_LT;
	v->a[70286] = anon_sym_GT;
	v->a[70287] = anon_sym_LT_LT;
	v->a[70288] = actions(795);
	v->a[70289] = 12;
	v->a[70290] = sym_file_descriptor;
	v->a[70291] = sym__concat;
	v->a[70292] = sym_variable_name;
	v->a[70293] = anon_sym_AMP_AMP;
	v->a[70294] = anon_sym_PIPE_PIPE;
	v->a[70295] = anon_sym_GT_GT;
	v->a[70296] = anon_sym_LT_AMP;
	v->a[70297] = anon_sym_GT_AMP;
	v->a[70298] = anon_sym_GT_PIPE;
	v->a[70299] = anon_sym_LT_GT;
	small_parse_table_3515(v);
}

/* EOF small_parse_table_702.c */
