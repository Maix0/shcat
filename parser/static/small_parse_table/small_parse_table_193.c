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
	v->a[19300] = actions(489);
	v->a[19301] = 1;
	v->a[19302] = sym_variable_name;
	v->a[19303] = state(218);
	v->a[19304] = 2;
	v->a[19305] = sym_concatenation;
	v->a[19306] = aux_sym_for_statement_repeat1;
	v->a[19307] = state(361);
	v->a[19308] = 5;
	v->a[19309] = sym_arithmetic_expansion;
	v->a[19310] = sym_string;
	v->a[19311] = sym_simple_expansion;
	v->a[19312] = sym_expansion;
	v->a[19313] = sym_command_substitution;
	v->a[19314] = actions(487);
	v->a[19315] = 25;
	v->a[19316] = anon_sym_esac;
	v->a[19317] = anon_sym_PIPE;
	v->a[19318] = anon_sym_SEMI_SEMI;
	v->a[19319] = anon_sym_AMP_AMP;
	small_parse_table_966(v);
}

void	small_parse_table_966(t_small_parse_table_array *v)
{
	v->a[19320] = anon_sym_PIPE_PIPE;
	v->a[19321] = anon_sym_LT;
	v->a[19322] = anon_sym_GT;
	v->a[19323] = anon_sym_GT_GT;
	v->a[19324] = anon_sym_LT_AMP;
	v->a[19325] = anon_sym_GT_AMP;
	v->a[19326] = anon_sym_GT_PIPE;
	v->a[19327] = anon_sym_LT_GT;
	v->a[19328] = anon_sym_LT_LT;
	v->a[19329] = anon_sym_LT_LT_DASH;
	v->a[19330] = aux_sym_heredoc_redirect_token1;
	v->a[19331] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19332] = anon_sym_DOLLAR;
	v->a[19333] = anon_sym_DQUOTE;
	v->a[19334] = sym_raw_string;
	v->a[19335] = sym_number;
	v->a[19336] = anon_sym_DOLLAR_LBRACE;
	v->a[19337] = anon_sym_DOLLAR_LPAREN;
	v->a[19338] = anon_sym_BQUOTE;
	v->a[19339] = sym_word;
	small_parse_table_967(v);
}

void	small_parse_table_967(t_small_parse_table_array *v)
{
	v->a[19340] = anon_sym_SEMI;
	v->a[19341] = 3;
	v->a[19342] = actions(407);
	v->a[19343] = 1;
	v->a[19344] = sym_comment;
	v->a[19345] = actions(439);
	v->a[19346] = 13;
	v->a[19347] = anon_sym_PIPE;
	v->a[19348] = anon_sym_EQ;
	v->a[19349] = anon_sym_LT;
	v->a[19350] = anon_sym_GT;
	v->a[19351] = anon_sym_GT_GT;
	v->a[19352] = anon_sym_LT_LT;
	v->a[19353] = anon_sym_CARET;
	v->a[19354] = anon_sym_AMP;
	v->a[19355] = anon_sym_PLUS;
	v->a[19356] = anon_sym_DASH;
	v->a[19357] = anon_sym_STAR;
	v->a[19358] = anon_sym_SLASH;
	v->a[19359] = anon_sym_PERCENT;
	small_parse_table_968(v);
}

void	small_parse_table_968(t_small_parse_table_array *v)
{
	v->a[19360] = actions(441);
	v->a[19361] = 20;
	v->a[19362] = anon_sym_RPAREN;
	v->a[19363] = anon_sym_AMP_AMP;
	v->a[19364] = anon_sym_PIPE_PIPE;
	v->a[19365] = anon_sym_PLUS_EQ;
	v->a[19366] = anon_sym_DASH_EQ;
	v->a[19367] = anon_sym_STAR_EQ;
	v->a[19368] = anon_sym_SLASH_EQ;
	v->a[19369] = anon_sym_PERCENT_EQ;
	v->a[19370] = anon_sym_LT_LT_EQ;
	v->a[19371] = anon_sym_GT_GT_EQ;
	v->a[19372] = anon_sym_AMP_EQ;
	v->a[19373] = anon_sym_CARET_EQ;
	v->a[19374] = anon_sym_PIPE_EQ;
	v->a[19375] = anon_sym_EQ_EQ;
	v->a[19376] = anon_sym_BANG_EQ;
	v->a[19377] = anon_sym_LT_EQ;
	v->a[19378] = anon_sym_GT_EQ;
	v->a[19379] = anon_sym_QMARK;
	small_parse_table_969(v);
}

void	small_parse_table_969(t_small_parse_table_array *v)
{
	v->a[19380] = anon_sym_PLUS_PLUS2;
	v->a[19381] = anon_sym_DASH_DASH2;
	v->a[19382] = 3;
	v->a[19383] = actions(407);
	v->a[19384] = 1;
	v->a[19385] = sym_comment;
	v->a[19386] = actions(435);
	v->a[19387] = 13;
	v->a[19388] = anon_sym_PIPE;
	v->a[19389] = anon_sym_EQ;
	v->a[19390] = anon_sym_LT;
	v->a[19391] = anon_sym_GT;
	v->a[19392] = anon_sym_GT_GT;
	v->a[19393] = anon_sym_LT_LT;
	v->a[19394] = anon_sym_CARET;
	v->a[19395] = anon_sym_AMP;
	v->a[19396] = anon_sym_PLUS;
	v->a[19397] = anon_sym_DASH;
	v->a[19398] = anon_sym_STAR;
	v->a[19399] = anon_sym_SLASH;
	small_parse_table_970(v);
}

/* EOF small_parse_table_193.c */
