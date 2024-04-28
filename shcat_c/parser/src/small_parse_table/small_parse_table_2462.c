/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2462.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12310(t_small_parse_table_array *v)
{
	v->a[246200] = anon_sym_SEMI;
	v->a[246201] = anon_sym_PIPE_PIPE;
	v->a[246202] = anon_sym_AMP_AMP;
	v->a[246203] = anon_sym_PIPE;
	v->a[246204] = anon_sym_AMP;
	v->a[246205] = anon_sym_LT;
	v->a[246206] = anon_sym_GT;
	v->a[246207] = anon_sym_LT_LT;
	v->a[246208] = anon_sym_GT_GT;
	v->a[246209] = anon_sym_RPAREN;
	v->a[246210] = anon_sym_SEMI_SEMI;
	v->a[246211] = anon_sym_PIPE_AMP;
	v->a[246212] = anon_sym_AMP_GT;
	v->a[246213] = anon_sym_AMP_GT_GT;
	v->a[246214] = anon_sym_LT_AMP;
	v->a[246215] = anon_sym_GT_AMP;
	v->a[246216] = anon_sym_GT_PIPE;
	v->a[246217] = anon_sym_LT_AMP_DASH;
	v->a[246218] = anon_sym_GT_AMP_DASH;
	v->a[246219] = anon_sym_LT_LT_DASH;
	small_parse_table_12311(v);
}

void	small_parse_table_12311(t_small_parse_table_array *v)
{
	v->a[246220] = anon_sym_LT_LT_LT;
	v->a[246221] = aux_sym_concatenation_token1;
	v->a[246222] = anon_sym_BQUOTE;
	v->a[246223] = 6;
	v->a[246224] = actions(3);
	v->a[246225] = 1;
	v->a[246226] = sym_comment;
	v->a[246227] = actions(11377);
	v->a[246228] = 1;
	v->a[246229] = aux_sym_concatenation_token1;
	v->a[246230] = actions(11529);
	v->a[246231] = 1;
	v->a[246232] = sym__concat;
	v->a[246233] = state(4413);
	v->a[246234] = 1;
	v->a[246235] = aux_sym_concatenation_repeat1;
	v->a[246236] = actions(1267);
	v->a[246237] = 3;
	v->a[246238] = sym_file_descriptor;
	v->a[246239] = sym_variable_name;
	small_parse_table_12312(v);
}

void	small_parse_table_12312(t_small_parse_table_array *v)
{
	v->a[246240] = aux_sym_heredoc_redirect_token1;
	v->a[246241] = actions(1265);
	v->a[246242] = 21;
	v->a[246243] = anon_sym_SEMI;
	v->a[246244] = anon_sym_PIPE_PIPE;
	v->a[246245] = anon_sym_AMP_AMP;
	v->a[246246] = anon_sym_PIPE;
	v->a[246247] = anon_sym_AMP;
	v->a[246248] = anon_sym_LT;
	v->a[246249] = anon_sym_GT;
	v->a[246250] = anon_sym_LT_LT;
	v->a[246251] = anon_sym_GT_GT;
	v->a[246252] = anon_sym_SEMI_SEMI;
	v->a[246253] = anon_sym_SEMI_AMP;
	v->a[246254] = anon_sym_SEMI_SEMI_AMP;
	v->a[246255] = anon_sym_PIPE_AMP;
	v->a[246256] = anon_sym_AMP_GT;
	v->a[246257] = anon_sym_AMP_GT_GT;
	v->a[246258] = anon_sym_LT_AMP;
	v->a[246259] = anon_sym_GT_AMP;
	small_parse_table_12313(v);
}

void	small_parse_table_12313(t_small_parse_table_array *v)
{
	v->a[246260] = anon_sym_GT_PIPE;
	v->a[246261] = anon_sym_LT_AMP_DASH;
	v->a[246262] = anon_sym_GT_AMP_DASH;
	v->a[246263] = anon_sym_LT_LT_DASH;
	v->a[246264] = 6;
	v->a[246265] = actions(3);
	v->a[246266] = 1;
	v->a[246267] = sym_comment;
	v->a[246268] = actions(11448);
	v->a[246269] = 1;
	v->a[246270] = anon_sym_LT_LT_LT;
	v->a[246271] = state(4912);
	v->a[246272] = 1;
	v->a[246273] = sym_herestring_redirect;
	v->a[246274] = actions(4348);
	v->a[246275] = 3;
	v->a[246276] = sym_file_descriptor;
	v->a[246277] = ts_builtin_sym_end;
	v->a[246278] = aux_sym_heredoc_redirect_token1;
	v->a[246279] = state(4650);
	small_parse_table_12314(v);
}

void	small_parse_table_12314(t_small_parse_table_array *v)
{
	v->a[246280] = 3;
	v->a[246281] = sym_file_redirect;
	v->a[246282] = sym_heredoc_redirect;
	v->a[246283] = aux_sym_redirected_statement_repeat1;
	v->a[246284] = actions(4253);
	v->a[246285] = 19;
	v->a[246286] = anon_sym_SEMI;
	v->a[246287] = anon_sym_PIPE_PIPE;
	v->a[246288] = anon_sym_AMP_AMP;
	v->a[246289] = anon_sym_PIPE;
	v->a[246290] = anon_sym_AMP;
	v->a[246291] = anon_sym_LT;
	v->a[246292] = anon_sym_GT;
	v->a[246293] = anon_sym_LT_LT;
	v->a[246294] = anon_sym_GT_GT;
	v->a[246295] = anon_sym_SEMI_SEMI;
	v->a[246296] = anon_sym_PIPE_AMP;
	v->a[246297] = anon_sym_AMP_GT;
	v->a[246298] = anon_sym_AMP_GT_GT;
	v->a[246299] = anon_sym_LT_AMP;
	small_parse_table_12315(v);
}

/* EOF small_parse_table_2462.c */
