/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2713.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13565(t_small_parse_table_array *v)
{
	v->a[271300] = anon_sym_PIPE_AMP;
	v->a[271301] = actions(4692);
	v->a[271302] = 2;
	v->a[271303] = anon_sym_LT_LT;
	v->a[271304] = anon_sym_LT_LT_DASH;
	v->a[271305] = actions(5099);
	v->a[271306] = 2;
	v->a[271307] = anon_sym_PIPE_PIPE;
	v->a[271308] = anon_sym_AMP_AMP;
	v->a[271309] = actions(11556);
	v->a[271310] = 2;
	v->a[271311] = anon_sym_LT_AMP_DASH;
	v->a[271312] = anon_sym_GT_AMP_DASH;
	v->a[271313] = actions(5381);
	v->a[271314] = 3;
	v->a[271315] = anon_sym_SEMI;
	v->a[271316] = anon_sym_AMP;
	v->a[271317] = anon_sym_SEMI_SEMI;
	v->a[271318] = state(4986);
	v->a[271319] = 3;
	small_parse_table_13566(v);
}

void	small_parse_table_13566(t_small_parse_table_array *v)
{
	v->a[271320] = sym_file_redirect;
	v->a[271321] = sym_heredoc_redirect;
	v->a[271322] = aux_sym_redirected_statement_repeat1;
	v->a[271323] = actions(11554);
	v->a[271324] = 8;
	v->a[271325] = anon_sym_LT;
	v->a[271326] = anon_sym_GT;
	v->a[271327] = anon_sym_GT_GT;
	v->a[271328] = anon_sym_AMP_GT;
	v->a[271329] = anon_sym_AMP_GT_GT;
	v->a[271330] = anon_sym_LT_AMP;
	v->a[271331] = anon_sym_GT_AMP;
	v->a[271332] = anon_sym_GT_PIPE;
	v->a[271333] = 3;
	v->a[271334] = actions(3);
	v->a[271335] = 1;
	v->a[271336] = sym_comment;
	v->a[271337] = actions(11931);
	v->a[271338] = 2;
	v->a[271339] = sym_file_descriptor;
	small_parse_table_13567(v);
}

void	small_parse_table_13567(t_small_parse_table_array *v)
{
	v->a[271340] = aux_sym_heredoc_redirect_token1;
	v->a[271341] = actions(11929);
	v->a[271342] = 22;
	v->a[271343] = anon_sym_SEMI;
	v->a[271344] = anon_sym_PIPE_PIPE;
	v->a[271345] = anon_sym_AMP_AMP;
	v->a[271346] = anon_sym_PIPE;
	v->a[271347] = anon_sym_AMP;
	v->a[271348] = anon_sym_LT;
	v->a[271349] = anon_sym_GT;
	v->a[271350] = anon_sym_LT_LT;
	v->a[271351] = anon_sym_GT_GT;
	v->a[271352] = anon_sym_esac;
	v->a[271353] = anon_sym_SEMI_SEMI;
	v->a[271354] = anon_sym_SEMI_AMP;
	v->a[271355] = anon_sym_SEMI_SEMI_AMP;
	v->a[271356] = anon_sym_PIPE_AMP;
	v->a[271357] = anon_sym_AMP_GT;
	v->a[271358] = anon_sym_AMP_GT_GT;
	v->a[271359] = anon_sym_LT_AMP;
	small_parse_table_13568(v);
}

void	small_parse_table_13568(t_small_parse_table_array *v)
{
	v->a[271360] = anon_sym_GT_AMP;
	v->a[271361] = anon_sym_GT_PIPE;
	v->a[271362] = anon_sym_LT_AMP_DASH;
	v->a[271363] = anon_sym_GT_AMP_DASH;
	v->a[271364] = anon_sym_LT_LT_DASH;
	v->a[271365] = 3;
	v->a[271366] = actions(3);
	v->a[271367] = 1;
	v->a[271368] = sym_comment;
	v->a[271369] = actions(12215);
	v->a[271370] = 3;
	v->a[271371] = sym_file_descriptor;
	v->a[271372] = ts_builtin_sym_end;
	v->a[271373] = aux_sym_heredoc_redirect_token1;
	v->a[271374] = actions(12213);
	v->a[271375] = 21;
	v->a[271376] = anon_sym_SEMI;
	v->a[271377] = anon_sym_PIPE_PIPE;
	v->a[271378] = anon_sym_AMP_AMP;
	v->a[271379] = anon_sym_PIPE;
	small_parse_table_13569(v);
}

void	small_parse_table_13569(t_small_parse_table_array *v)
{
	v->a[271380] = anon_sym_AMP;
	v->a[271381] = anon_sym_LT;
	v->a[271382] = anon_sym_GT;
	v->a[271383] = anon_sym_LT_LT;
	v->a[271384] = anon_sym_GT_GT;
	v->a[271385] = anon_sym_RPAREN;
	v->a[271386] = anon_sym_SEMI_SEMI;
	v->a[271387] = anon_sym_PIPE_AMP;
	v->a[271388] = anon_sym_AMP_GT;
	v->a[271389] = anon_sym_AMP_GT_GT;
	v->a[271390] = anon_sym_LT_AMP;
	v->a[271391] = anon_sym_GT_AMP;
	v->a[271392] = anon_sym_GT_PIPE;
	v->a[271393] = anon_sym_LT_AMP_DASH;
	v->a[271394] = anon_sym_GT_AMP_DASH;
	v->a[271395] = anon_sym_LT_LT_DASH;
	v->a[271396] = anon_sym_BQUOTE;
	v->a[271397] = 3;
	v->a[271398] = actions(3);
	v->a[271399] = 1;
	small_parse_table_13570(v);
}

/* EOF small_parse_table_2713.c */
