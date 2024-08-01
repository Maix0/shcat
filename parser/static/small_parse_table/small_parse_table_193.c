/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_193.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_965(t_small_parse_table_array *v)
{
	v->a[19300] = actions(771);
	v->a[19301] = 1;
	v->a[19302] = sym_variable_name;
	v->a[19303] = state(428);
	v->a[19304] = 1;
	v->a[19305] = sym_terminator;
	v->a[19306] = actions(593);
	v->a[19307] = 2;
	v->a[19308] = aux_sym_heredoc_redirect_token1;
	v->a[19309] = anon_sym_SEMI;
	v->a[19310] = actions(769);
	v->a[19311] = 2;
	v->a[19312] = anon_sym_AMP_AMP;
	v->a[19313] = anon_sym_PIPE_PIPE;
	v->a[19314] = state(995);
	v->a[19315] = 2;
	v->a[19316] = sym_variable_assignment;
	v->a[19317] = aux_sym__variable_assignments_repeat1;
	v->a[19318] = state(1040);
	v->a[19319] = 3;
	small_parse_table_966(v);
}

void	small_parse_table_966(t_small_parse_table_array *v)
{
	v->a[19320] = sym_file_redirect;
	v->a[19321] = sym_heredoc_redirect;
	v->a[19322] = aux_sym_redirected_statement_repeat1;
	v->a[19323] = actions(576);
	v->a[19324] = 12;
	v->a[19325] = anon_sym_LT;
	v->a[19326] = anon_sym_GT;
	v->a[19327] = anon_sym_GT_GT;
	v->a[19328] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19329] = anon_sym_DOLLAR;
	v->a[19330] = anon_sym_DQUOTE;
	v->a[19331] = sym_raw_string;
	v->a[19332] = sym_number;
	v->a[19333] = anon_sym_DOLLAR_LBRACE;
	v->a[19334] = anon_sym_DOLLAR_LPAREN;
	v->a[19335] = anon_sym_BQUOTE;
	v->a[19336] = sym_word;
	v->a[19337] = 18;
	v->a[19338] = actions(3);
	v->a[19339] = 1;
	small_parse_table_967(v);
}

void	small_parse_table_967(t_small_parse_table_array *v)
{
	v->a[19340] = sym_comment;
	v->a[19341] = actions(778);
	v->a[19342] = 1;
	v->a[19343] = anon_sym_LPAREN;
	v->a[19344] = actions(782);
	v->a[19345] = 1;
	v->a[19346] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19347] = actions(784);
	v->a[19348] = 1;
	v->a[19349] = anon_sym_DOLLAR;
	v->a[19350] = actions(786);
	v->a[19351] = 1;
	v->a[19352] = anon_sym_DQUOTE;
	v->a[19353] = actions(788);
	v->a[19354] = 1;
	v->a[19355] = anon_sym_DOLLAR_LBRACE;
	v->a[19356] = actions(790);
	v->a[19357] = 1;
	v->a[19358] = anon_sym_DOLLAR_LPAREN;
	v->a[19359] = actions(792);
	small_parse_table_968(v);
}

void	small_parse_table_968(t_small_parse_table_array *v)
{
	v->a[19360] = 1;
	v->a[19361] = anon_sym_BQUOTE;
	v->a[19362] = actions(794);
	v->a[19363] = 1;
	v->a[19364] = sym_extglob_pattern;
	v->a[19365] = actions(802);
	v->a[19366] = 1;
	v->a[19367] = anon_sym_esac;
	v->a[19368] = state(478);
	v->a[19369] = 1;
	v->a[19370] = sym_terminator;
	v->a[19371] = state(522);
	v->a[19372] = 1;
	v->a[19373] = aux_sym_case_statement_repeat1;
	v->a[19374] = state(1232);
	v->a[19375] = 1;
	v->a[19376] = sym_case_item;
	v->a[19377] = state(1721);
	v->a[19378] = 1;
	v->a[19379] = sym__case_item_last;
	small_parse_table_969(v);
}

void	small_parse_table_969(t_small_parse_table_array *v)
{
	v->a[19380] = state(1538);
	v->a[19381] = 2;
	v->a[19382] = sym_concatenation;
	v->a[19383] = sym__extglob_blob;
	v->a[19384] = actions(774);
	v->a[19385] = 3;
	v->a[19386] = sym_raw_string;
	v->a[19387] = sym_number;
	v->a[19388] = sym_word;
	v->a[19389] = actions(780);
	v->a[19390] = 3;
	v->a[19391] = anon_sym_SEMI_SEMI;
	v->a[19392] = aux_sym_heredoc_redirect_token1;
	v->a[19393] = anon_sym_SEMI;
	v->a[19394] = state(1468);
	v->a[19395] = 5;
	v->a[19396] = sym_arithmetic_expansion;
	v->a[19397] = sym_string;
	v->a[19398] = sym_simple_expansion;
	v->a[19399] = sym_expansion;
	small_parse_table_970(v);
}

/* EOF small_parse_table_193.c */
