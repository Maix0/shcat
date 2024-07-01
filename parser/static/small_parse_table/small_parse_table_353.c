/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_353.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1765(t_small_parse_table_array *v)
{
	v->a[35300] = anon_sym_SEMI;
	v->a[35301] = 6;
	v->a[35302] = actions(3);
	v->a[35303] = 1;
	v->a[35304] = sym_comment;
	v->a[35305] = actions(1287);
	v->a[35306] = 1;
	v->a[35307] = aux_sym_concatenation_token1;
	v->a[35308] = actions(1297);
	v->a[35309] = 1;
	v->a[35310] = sym__concat;
	v->a[35311] = state(435);
	v->a[35312] = 1;
	v->a[35313] = aux_sym_concatenation_repeat1;
	v->a[35314] = actions(575);
	v->a[35315] = 3;
	v->a[35316] = sym_file_descriptor;
	v->a[35317] = sym_variable_name;
	v->a[35318] = ts_builtin_sym_end;
	v->a[35319] = actions(573);
	small_parse_table_1766(v);
}

void	small_parse_table_1766(t_small_parse_table_array *v)
{
	v->a[35320] = 26;
	v->a[35321] = anon_sym_PIPE;
	v->a[35322] = anon_sym_SEMI_SEMI;
	v->a[35323] = anon_sym_AMP_AMP;
	v->a[35324] = anon_sym_PIPE_PIPE;
	v->a[35325] = anon_sym_LT;
	v->a[35326] = anon_sym_GT;
	v->a[35327] = anon_sym_GT_GT;
	v->a[35328] = anon_sym_LT_AMP;
	v->a[35329] = anon_sym_GT_AMP;
	v->a[35330] = anon_sym_GT_PIPE;
	v->a[35331] = anon_sym_LT_AMP_DASH;
	v->a[35332] = anon_sym_GT_AMP_DASH;
	v->a[35333] = anon_sym_LT_LT;
	v->a[35334] = anon_sym_LT_LT_DASH;
	v->a[35335] = aux_sym_heredoc_redirect_token1;
	v->a[35336] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35337] = anon_sym_AMP;
	v->a[35338] = anon_sym_DOLLAR;
	v->a[35339] = anon_sym_DQUOTE;
	small_parse_table_1767(v);
}

void	small_parse_table_1767(t_small_parse_table_array *v)
{
	v->a[35340] = sym_raw_string;
	v->a[35341] = sym_number;
	v->a[35342] = anon_sym_DOLLAR_LBRACE;
	v->a[35343] = anon_sym_DOLLAR_LPAREN;
	v->a[35344] = anon_sym_BQUOTE;
	v->a[35345] = sym_word;
	v->a[35346] = anon_sym_SEMI;
	v->a[35347] = 21;
	v->a[35348] = actions(3);
	v->a[35349] = 1;
	v->a[35350] = sym_comment;
	v->a[35351] = actions(17);
	v->a[35352] = 1;
	v->a[35353] = anon_sym_LPAREN;
	v->a[35354] = actions(27);
	v->a[35355] = 1;
	v->a[35356] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35357] = actions(29);
	v->a[35358] = 1;
	v->a[35359] = anon_sym_DOLLAR;
	small_parse_table_1768(v);
}

void	small_parse_table_1768(t_small_parse_table_array *v)
{
	v->a[35360] = actions(31);
	v->a[35361] = 1;
	v->a[35362] = anon_sym_DQUOTE;
	v->a[35363] = actions(35);
	v->a[35364] = 1;
	v->a[35365] = anon_sym_DOLLAR_LBRACE;
	v->a[35366] = actions(37);
	v->a[35367] = 1;
	v->a[35368] = anon_sym_DOLLAR_LPAREN;
	v->a[35369] = actions(39);
	v->a[35370] = 1;
	v->a[35371] = anon_sym_BQUOTE;
	v->a[35372] = actions(43);
	v->a[35373] = 1;
	v->a[35374] = sym_variable_name;
	v->a[35375] = actions(1256);
	v->a[35376] = 1;
	v->a[35377] = sym_file_descriptor;
	v->a[35378] = state(181);
	v->a[35379] = 1;
	small_parse_table_1769(v);
}

void	small_parse_table_1769(t_small_parse_table_array *v)
{
	v->a[35380] = sym_command_name;
	v->a[35381] = state(618);
	v->a[35382] = 1;
	v->a[35383] = sym_concatenation;
	v->a[35384] = state(688);
	v->a[35385] = 1;
	v->a[35386] = aux_sym_command_repeat1;
	v->a[35387] = state(695);
	v->a[35388] = 1;
	v->a[35389] = sym_variable_assignment;
	v->a[35390] = state(1216);
	v->a[35391] = 1;
	v->a[35392] = sym_subshell;
	v->a[35393] = state(1220);
	v->a[35394] = 1;
	v->a[35395] = sym_command;
	v->a[35396] = state(1385);
	v->a[35397] = 1;
	v->a[35398] = sym_file_redirect;
	v->a[35399] = actions(1254);
	small_parse_table_1770(v);
}

/* EOF small_parse_table_353.c */
