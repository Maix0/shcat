/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_192.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_960(t_small_parse_table_array *v)
{
	v->a[19200] = state(592);
	v->a[19201] = 1;
	v->a[19202] = sym_concatenation;
	v->a[19203] = actions(495);
	v->a[19204] = 3;
	v->a[19205] = sym_raw_string;
	v->a[19206] = sym_number;
	v->a[19207] = sym_word;
	v->a[19208] = state(357);
	v->a[19209] = 5;
	v->a[19210] = sym_arithmetic_expansion;
	v->a[19211] = sym_string;
	v->a[19212] = sym_simple_expansion;
	v->a[19213] = sym_expansion;
	v->a[19214] = sym_command_substitution;
	v->a[19215] = actions(537);
	v->a[19216] = 16;
	v->a[19217] = anon_sym_esac;
	v->a[19218] = anon_sym_PIPE;
	v->a[19219] = anon_sym_SEMI_SEMI;
	small_parse_table_961(v);
}

void	small_parse_table_961(t_small_parse_table_array *v)
{
	v->a[19220] = anon_sym_AMP_AMP;
	v->a[19221] = anon_sym_PIPE_PIPE;
	v->a[19222] = anon_sym_LT;
	v->a[19223] = anon_sym_GT;
	v->a[19224] = anon_sym_GT_GT;
	v->a[19225] = anon_sym_LT_AMP;
	v->a[19226] = anon_sym_GT_AMP;
	v->a[19227] = anon_sym_GT_PIPE;
	v->a[19228] = anon_sym_LT_GT;
	v->a[19229] = anon_sym_LT_LT;
	v->a[19230] = anon_sym_LT_LT_DASH;
	v->a[19231] = aux_sym_heredoc_redirect_token1;
	v->a[19232] = anon_sym_SEMI;
	v->a[19233] = 14;
	v->a[19234] = actions(3);
	v->a[19235] = 1;
	v->a[19236] = sym_comment;
	v->a[19237] = actions(25);
	v->a[19238] = 1;
	v->a[19239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_962(v);
}

void	small_parse_table_962(t_small_parse_table_array *v)
{
	v->a[19240] = actions(27);
	v->a[19241] = 1;
	v->a[19242] = anon_sym_DOLLAR;
	v->a[19243] = actions(29);
	v->a[19244] = 1;
	v->a[19245] = anon_sym_DQUOTE;
	v->a[19246] = actions(33);
	v->a[19247] = 1;
	v->a[19248] = anon_sym_DOLLAR_LBRACE;
	v->a[19249] = actions(35);
	v->a[19250] = 1;
	v->a[19251] = anon_sym_DOLLAR_LPAREN;
	v->a[19252] = actions(37);
	v->a[19253] = 1;
	v->a[19254] = anon_sym_BQUOTE;
	v->a[19255] = actions(605);
	v->a[19256] = 1;
	v->a[19257] = sym__bare_dollar;
	v->a[19258] = actions(609);
	v->a[19259] = 1;
	small_parse_table_963(v);
}

void	small_parse_table_963(t_small_parse_table_array *v)
{
	v->a[19260] = ts_builtin_sym_end;
	v->a[19261] = state(186);
	v->a[19262] = 1;
	v->a[19263] = aux_sym_command_repeat2;
	v->a[19264] = state(626);
	v->a[19265] = 1;
	v->a[19266] = sym_concatenation;
	v->a[19267] = actions(603);
	v->a[19268] = 3;
	v->a[19269] = sym_raw_string;
	v->a[19270] = sym_number;
	v->a[19271] = sym_word;
	v->a[19272] = state(339);
	v->a[19273] = 5;
	v->a[19274] = sym_arithmetic_expansion;
	v->a[19275] = sym_string;
	v->a[19276] = sym_simple_expansion;
	v->a[19277] = sym_expansion;
	v->a[19278] = sym_command_substitution;
	v->a[19279] = actions(565);
	small_parse_table_964(v);
}

void	small_parse_table_964(t_small_parse_table_array *v)
{
	v->a[19280] = 15;
	v->a[19281] = anon_sym_PIPE;
	v->a[19282] = anon_sym_SEMI_SEMI;
	v->a[19283] = anon_sym_AMP_AMP;
	v->a[19284] = anon_sym_PIPE_PIPE;
	v->a[19285] = anon_sym_LT;
	v->a[19286] = anon_sym_GT;
	v->a[19287] = anon_sym_GT_GT;
	v->a[19288] = anon_sym_LT_AMP;
	v->a[19289] = anon_sym_GT_AMP;
	v->a[19290] = anon_sym_GT_PIPE;
	v->a[19291] = anon_sym_LT_GT;
	v->a[19292] = anon_sym_LT_LT;
	v->a[19293] = anon_sym_LT_LT_DASH;
	v->a[19294] = aux_sym_heredoc_redirect_token1;
	v->a[19295] = anon_sym_SEMI;
	v->a[19296] = 5;
	v->a[19297] = actions(3);
	v->a[19298] = 1;
	v->a[19299] = sym_comment;
	small_parse_table_965(v);
}

/* EOF small_parse_table_192.c */
