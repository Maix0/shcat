/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_563.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2815(t_small_parse_table_array *v)
{
	v->a[56300] = anon_sym_PIPE;
	v->a[56301] = anon_sym_SEMI_SEMI;
	v->a[56302] = anon_sym_AMP_AMP;
	v->a[56303] = anon_sym_PIPE_PIPE;
	v->a[56304] = anon_sym_LT;
	v->a[56305] = anon_sym_GT;
	v->a[56306] = anon_sym_GT_GT;
	v->a[56307] = anon_sym_LT_AMP;
	v->a[56308] = anon_sym_GT_AMP;
	v->a[56309] = anon_sym_GT_PIPE;
	v->a[56310] = anon_sym_LT_GT;
	v->a[56311] = anon_sym_LT_LT;
	v->a[56312] = anon_sym_LT_LT_DASH;
	v->a[56313] = anon_sym_AMP;
	v->a[56314] = anon_sym_BQUOTE;
	v->a[56315] = anon_sym_SEMI;
	v->a[56316] = 11;
	v->a[56317] = actions(3);
	v->a[56318] = 1;
	v->a[56319] = sym_comment;
	small_parse_table_2816(v);
}

void	small_parse_table_2816(t_small_parse_table_array *v)
{
	v->a[56320] = actions(736);
	v->a[56321] = 1;
	v->a[56322] = anon_sym_PIPE;
	v->a[56323] = actions(842);
	v->a[56324] = 1;
	v->a[56325] = anon_sym_RPAREN;
	v->a[56326] = actions(1865);
	v->a[56327] = 1;
	v->a[56328] = aux_sym_heredoc_redirect_token1;
	v->a[56329] = actions(1881);
	v->a[56330] = 1;
	v->a[56331] = sym_file_descriptor;
	v->a[56332] = state(684);
	v->a[56333] = 1;
	v->a[56334] = sym_terminator;
	v->a[56335] = actions(742);
	v->a[56336] = 2;
	v->a[56337] = anon_sym_AMP_AMP;
	v->a[56338] = anon_sym_PIPE_PIPE;
	v->a[56339] = actions(744);
	small_parse_table_2817(v);
}

void	small_parse_table_2817(t_small_parse_table_array *v)
{
	v->a[56340] = 2;
	v->a[56341] = anon_sym_LT_LT;
	v->a[56342] = anon_sym_LT_LT_DASH;
	v->a[56343] = actions(740);
	v->a[56344] = 3;
	v->a[56345] = anon_sym_SEMI_SEMI;
	v->a[56346] = anon_sym_AMP;
	v->a[56347] = anon_sym_SEMI;
	v->a[56348] = state(1080);
	v->a[56349] = 3;
	v->a[56350] = sym_file_redirect;
	v->a[56351] = sym_heredoc_redirect;
	v->a[56352] = aux_sym_redirected_statement_repeat1;
	v->a[56353] = actions(1879);
	v->a[56354] = 7;
	v->a[56355] = anon_sym_LT;
	v->a[56356] = anon_sym_GT;
	v->a[56357] = anon_sym_GT_GT;
	v->a[56358] = anon_sym_LT_AMP;
	v->a[56359] = anon_sym_GT_AMP;
	small_parse_table_2818(v);
}

void	small_parse_table_2818(t_small_parse_table_array *v)
{
	v->a[56360] = anon_sym_GT_PIPE;
	v->a[56361] = anon_sym_LT_GT;
	v->a[56362] = 11;
	v->a[56363] = actions(3);
	v->a[56364] = 1;
	v->a[56365] = sym_comment;
	v->a[56366] = actions(736);
	v->a[56367] = 1;
	v->a[56368] = anon_sym_PIPE;
	v->a[56369] = actions(842);
	v->a[56370] = 1;
	v->a[56371] = anon_sym_RPAREN;
	v->a[56372] = actions(1865);
	v->a[56373] = 1;
	v->a[56374] = aux_sym_heredoc_redirect_token1;
	v->a[56375] = actions(1881);
	v->a[56376] = 1;
	v->a[56377] = sym_file_descriptor;
	v->a[56378] = state(683);
	v->a[56379] = 1;
	small_parse_table_2819(v);
}

void	small_parse_table_2819(t_small_parse_table_array *v)
{
	v->a[56380] = sym_terminator;
	v->a[56381] = actions(742);
	v->a[56382] = 2;
	v->a[56383] = anon_sym_AMP_AMP;
	v->a[56384] = anon_sym_PIPE_PIPE;
	v->a[56385] = actions(744);
	v->a[56386] = 2;
	v->a[56387] = anon_sym_LT_LT;
	v->a[56388] = anon_sym_LT_LT_DASH;
	v->a[56389] = actions(740);
	v->a[56390] = 3;
	v->a[56391] = anon_sym_SEMI_SEMI;
	v->a[56392] = anon_sym_AMP;
	v->a[56393] = anon_sym_SEMI;
	v->a[56394] = state(1080);
	v->a[56395] = 3;
	v->a[56396] = sym_file_redirect;
	v->a[56397] = sym_heredoc_redirect;
	v->a[56398] = aux_sym_redirected_statement_repeat1;
	v->a[56399] = actions(1879);
	small_parse_table_2820(v);
}

/* EOF small_parse_table_563.c */
