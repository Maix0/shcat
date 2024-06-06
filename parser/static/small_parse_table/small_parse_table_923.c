/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_923.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4615(t_small_parse_table_array *v)
{
	v->a[92300] = ts_builtin_sym_end;
	v->a[92301] = aux_sym_heredoc_redirect_token1;
	v->a[92302] = actions(2772);
	v->a[92303] = 22;
	v->a[92304] = anon_sym_PIPE;
	v->a[92305] = anon_sym_RPAREN;
	v->a[92306] = anon_sym_SEMI_SEMI;
	v->a[92307] = anon_sym_PIPE_AMP;
	v->a[92308] = anon_sym_AMP_AMP;
	v->a[92309] = anon_sym_PIPE_PIPE;
	v->a[92310] = anon_sym_LT;
	v->a[92311] = anon_sym_GT;
	v->a[92312] = anon_sym_GT_GT;
	v->a[92313] = anon_sym_AMP_GT;
	v->a[92314] = anon_sym_AMP_GT_GT;
	v->a[92315] = anon_sym_LT_AMP;
	v->a[92316] = anon_sym_GT_AMP;
	v->a[92317] = anon_sym_GT_PIPE;
	v->a[92318] = anon_sym_LT_AMP_DASH;
	v->a[92319] = anon_sym_GT_AMP_DASH;
	small_parse_table_4616(v);
}

void	small_parse_table_4616(t_small_parse_table_array *v)
{
	v->a[92320] = anon_sym_LT_LT;
	v->a[92321] = anon_sym_LT_LT_DASH;
	v->a[92322] = anon_sym_AMP;
	v->a[92323] = aux_sym_concatenation_token1;
	v->a[92324] = anon_sym_BQUOTE;
	v->a[92325] = anon_sym_SEMI;
	v->a[92326] = 5;
	v->a[92327] = actions(3);
	v->a[92328] = 1;
	v->a[92329] = sym_comment;
	v->a[92330] = actions(5147);
	v->a[92331] = 1;
	v->a[92332] = sym_variable_name;
	v->a[92333] = actions(5145);
	v->a[92334] = 2;
	v->a[92335] = sym_file_descriptor;
	v->a[92336] = aux_sym_heredoc_redirect_token1;
	v->a[92337] = state(1901);
	v->a[92338] = 2;
	v->a[92339] = sym_variable_assignment;
	small_parse_table_4617(v);
}

void	small_parse_table_4617(t_small_parse_table_array *v)
{
	v->a[92340] = aux_sym_variable_assignments_repeat1;
	v->a[92341] = actions(5143);
	v->a[92342] = 22;
	v->a[92343] = anon_sym_esac;
	v->a[92344] = anon_sym_PIPE;
	v->a[92345] = anon_sym_SEMI_SEMI;
	v->a[92346] = anon_sym_SEMI_AMP;
	v->a[92347] = anon_sym_SEMI_SEMI_AMP;
	v->a[92348] = anon_sym_PIPE_AMP;
	v->a[92349] = anon_sym_AMP_AMP;
	v->a[92350] = anon_sym_PIPE_PIPE;
	v->a[92351] = anon_sym_LT;
	v->a[92352] = anon_sym_GT;
	v->a[92353] = anon_sym_GT_GT;
	v->a[92354] = anon_sym_AMP_GT;
	v->a[92355] = anon_sym_AMP_GT_GT;
	v->a[92356] = anon_sym_LT_AMP;
	v->a[92357] = anon_sym_GT_AMP;
	v->a[92358] = anon_sym_GT_PIPE;
	v->a[92359] = anon_sym_LT_AMP_DASH;
	small_parse_table_4618(v);
}

void	small_parse_table_4618(t_small_parse_table_array *v)
{
	v->a[92360] = anon_sym_GT_AMP_DASH;
	v->a[92361] = anon_sym_LT_LT;
	v->a[92362] = anon_sym_LT_LT_DASH;
	v->a[92363] = anon_sym_AMP;
	v->a[92364] = anon_sym_SEMI;
	v->a[92365] = 5;
	v->a[92366] = actions(57);
	v->a[92367] = 1;
	v->a[92368] = sym_comment;
	v->a[92369] = actions(5149);
	v->a[92370] = 1;
	v->a[92371] = sym__special_character;
	v->a[92372] = state(1947);
	v->a[92373] = 1;
	v->a[92374] = aux_sym__literal_repeat1;
	v->a[92375] = actions(3541);
	v->a[92376] = 10;
	v->a[92377] = anon_sym_LT;
	v->a[92378] = anon_sym_GT;
	v->a[92379] = anon_sym_AMP_GT;
	small_parse_table_4619(v);
}

void	small_parse_table_4619(t_small_parse_table_array *v)
{
	v->a[92380] = anon_sym_LT_AMP;
	v->a[92381] = anon_sym_GT_AMP;
	v->a[92382] = anon_sym_DOLLAR;
	v->a[92383] = aux_sym_number_token1;
	v->a[92384] = aux_sym_number_token2;
	v->a[92385] = anon_sym_DOLLAR_LPAREN;
	v->a[92386] = sym_word;
	v->a[92387] = actions(3543);
	v->a[92388] = 15;
	v->a[92389] = sym_file_descriptor;
	v->a[92390] = sym_variable_name;
	v->a[92391] = sym_test_operator;
	v->a[92392] = sym__brace_start;
	v->a[92393] = anon_sym_GT_GT;
	v->a[92394] = anon_sym_AMP_GT_GT;
	v->a[92395] = anon_sym_GT_PIPE;
	v->a[92396] = anon_sym_LT_AMP_DASH;
	v->a[92397] = anon_sym_GT_AMP_DASH;
	v->a[92398] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[92399] = anon_sym_DQUOTE;
	small_parse_table_4620(v);
}

/* EOF small_parse_table_923.c */
