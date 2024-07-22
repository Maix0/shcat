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
	v->a[56300] = actions(1888);
	v->a[56301] = 1;
	v->a[56302] = aux_sym_heredoc_redirect_token1;
	v->a[56303] = actions(1933);
	v->a[56304] = 1;
	v->a[56305] = sym_file_descriptor;
	v->a[56306] = state(574);
	v->a[56307] = 1;
	v->a[56308] = sym_terminator;
	v->a[56309] = actions(786);
	v->a[56310] = 2;
	v->a[56311] = anon_sym_SEMI_SEMI;
	v->a[56312] = anon_sym_SEMI;
	v->a[56313] = actions(788);
	v->a[56314] = 2;
	v->a[56315] = anon_sym_AMP_AMP;
	v->a[56316] = anon_sym_PIPE_PIPE;
	v->a[56317] = actions(790);
	v->a[56318] = 2;
	v->a[56319] = anon_sym_LT_LT;
	small_parse_table_2816(v);
}

void	small_parse_table_2816(t_small_parse_table_array *v)
{
	v->a[56320] = anon_sym_LT_LT_DASH;
	v->a[56321] = state(1034);
	v->a[56322] = 3;
	v->a[56323] = sym_file_redirect;
	v->a[56324] = sym_heredoc_redirect;
	v->a[56325] = aux_sym_redirected_statement_repeat1;
	v->a[56326] = actions(1931);
	v->a[56327] = 7;
	v->a[56328] = anon_sym_LT;
	v->a[56329] = anon_sym_GT;
	v->a[56330] = anon_sym_GT_GT;
	v->a[56331] = anon_sym_LT_AMP;
	v->a[56332] = anon_sym_GT_AMP;
	v->a[56333] = anon_sym_GT_PIPE;
	v->a[56334] = anon_sym_LT_GT;
	v->a[56335] = 11;
	v->a[56336] = actions(3);
	v->a[56337] = 1;
	v->a[56338] = sym_comment;
	v->a[56339] = actions(782);
	small_parse_table_2817(v);
}

void	small_parse_table_2817(t_small_parse_table_array *v)
{
	v->a[56340] = 1;
	v->a[56341] = anon_sym_PIPE;
	v->a[56342] = actions(784);
	v->a[56343] = 1;
	v->a[56344] = anon_sym_RPAREN;
	v->a[56345] = actions(1888);
	v->a[56346] = 1;
	v->a[56347] = aux_sym_heredoc_redirect_token1;
	v->a[56348] = actions(1933);
	v->a[56349] = 1;
	v->a[56350] = sym_file_descriptor;
	v->a[56351] = state(573);
	v->a[56352] = 1;
	v->a[56353] = sym_terminator;
	v->a[56354] = actions(786);
	v->a[56355] = 2;
	v->a[56356] = anon_sym_SEMI_SEMI;
	v->a[56357] = anon_sym_SEMI;
	v->a[56358] = actions(788);
	v->a[56359] = 2;
	small_parse_table_2818(v);
}

void	small_parse_table_2818(t_small_parse_table_array *v)
{
	v->a[56360] = anon_sym_AMP_AMP;
	v->a[56361] = anon_sym_PIPE_PIPE;
	v->a[56362] = actions(790);
	v->a[56363] = 2;
	v->a[56364] = anon_sym_LT_LT;
	v->a[56365] = anon_sym_LT_LT_DASH;
	v->a[56366] = state(1034);
	v->a[56367] = 3;
	v->a[56368] = sym_file_redirect;
	v->a[56369] = sym_heredoc_redirect;
	v->a[56370] = aux_sym_redirected_statement_repeat1;
	v->a[56371] = actions(1931);
	v->a[56372] = 7;
	v->a[56373] = anon_sym_LT;
	v->a[56374] = anon_sym_GT;
	v->a[56375] = anon_sym_GT_GT;
	v->a[56376] = anon_sym_LT_AMP;
	v->a[56377] = anon_sym_GT_AMP;
	v->a[56378] = anon_sym_GT_PIPE;
	v->a[56379] = anon_sym_LT_GT;
	small_parse_table_2819(v);
}

void	small_parse_table_2819(t_small_parse_table_array *v)
{
	v->a[56380] = 6;
	v->a[56381] = actions(3);
	v->a[56382] = 1;
	v->a[56383] = sym_comment;
	v->a[56384] = actions(1902);
	v->a[56385] = 1;
	v->a[56386] = aux_sym_concatenation_token1;
	v->a[56387] = actions(1937);
	v->a[56388] = 1;
	v->a[56389] = sym__concat;
	v->a[56390] = state(908);
	v->a[56391] = 1;
	v->a[56392] = aux_sym_concatenation_repeat1;
	v->a[56393] = actions(1097);
	v->a[56394] = 4;
	v->a[56395] = sym_file_descriptor;
	v->a[56396] = sym_variable_name;
	v->a[56397] = ts_builtin_sym_end;
	v->a[56398] = aux_sym_heredoc_redirect_token1;
	v->a[56399] = actions(1099);
	small_parse_table_2820(v);
}

/* EOF small_parse_table_563.c */
