/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_919.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4595(t_small_parse_table_array *v)
{
	v->a[91900] = aux_sym_number_token1;
	v->a[91901] = aux_sym_number_token2;
	v->a[91902] = anon_sym_DOLLAR_LBRACE;
	v->a[91903] = anon_sym_DOLLAR_LPAREN;
	v->a[91904] = anon_sym_BQUOTE;
	v->a[91905] = anon_sym_DOLLAR_BQUOTE;
	v->a[91906] = anon_sym_LT_LPAREN;
	v->a[91907] = anon_sym_GT_LPAREN;
	v->a[91908] = sym_word;
	v->a[91909] = 5;
	v->a[91910] = actions(3);
	v->a[91911] = 1;
	v->a[91912] = sym_comment;
	v->a[91913] = actions(5988);
	v->a[91914] = 1;
	v->a[91915] = sym__special_character;
	v->a[91916] = state(1829);
	v->a[91917] = 1;
	v->a[91918] = aux_sym__literal_repeat1;
	v->a[91919] = actions(5697);
	small_parse_table_4596(v);
}

void	small_parse_table_4596(t_small_parse_table_array *v)
{
	v->a[91920] = 6;
	v->a[91921] = sym_file_descriptor;
	v->a[91922] = sym_variable_name;
	v->a[91923] = sym_test_operator;
	v->a[91924] = sym__brace_start;
	v->a[91925] = ts_builtin_sym_end;
	v->a[91926] = aux_sym_heredoc_redirect_token1;
	v->a[91927] = actions(5695);
	v->a[91928] = 36;
	v->a[91929] = anon_sym_LPAREN_LPAREN;
	v->a[91930] = anon_sym_SEMI;
	v->a[91931] = anon_sym_PIPE_PIPE;
	v->a[91932] = anon_sym_AMP_AMP;
	v->a[91933] = anon_sym_PIPE;
	v->a[91934] = anon_sym_AMP;
	v->a[91935] = anon_sym_LT;
	v->a[91936] = anon_sym_GT;
	v->a[91937] = anon_sym_LT_LT;
	v->a[91938] = anon_sym_GT_GT;
	v->a[91939] = anon_sym_SEMI_SEMI;
	small_parse_table_4597(v);
}

void	small_parse_table_4597(t_small_parse_table_array *v)
{
	v->a[91940] = anon_sym_PIPE_AMP;
	v->a[91941] = anon_sym_AMP_GT;
	v->a[91942] = anon_sym_AMP_GT_GT;
	v->a[91943] = anon_sym_LT_AMP;
	v->a[91944] = anon_sym_GT_AMP;
	v->a[91945] = anon_sym_GT_PIPE;
	v->a[91946] = anon_sym_LT_AMP_DASH;
	v->a[91947] = anon_sym_GT_AMP_DASH;
	v->a[91948] = anon_sym_LT_LT_DASH;
	v->a[91949] = anon_sym_LT_LT_LT;
	v->a[91950] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91951] = anon_sym_DOLLAR_LBRACK;
	v->a[91952] = anon_sym_DOLLAR;
	v->a[91953] = anon_sym_DQUOTE;
	v->a[91954] = sym_raw_string;
	v->a[91955] = sym_ansi_c_string;
	v->a[91956] = aux_sym_number_token1;
	v->a[91957] = aux_sym_number_token2;
	v->a[91958] = anon_sym_DOLLAR_LBRACE;
	v->a[91959] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4598(v);
}

void	small_parse_table_4598(t_small_parse_table_array *v)
{
	v->a[91960] = anon_sym_BQUOTE;
	v->a[91961] = anon_sym_DOLLAR_BQUOTE;
	v->a[91962] = anon_sym_LT_LPAREN;
	v->a[91963] = anon_sym_GT_LPAREN;
	v->a[91964] = sym_word;
	v->a[91965] = 3;
	v->a[91966] = actions(3);
	v->a[91967] = 1;
	v->a[91968] = sym_comment;
	v->a[91969] = actions(1318);
	v->a[91970] = 6;
	v->a[91971] = sym_file_descriptor;
	v->a[91972] = sym__concat;
	v->a[91973] = sym_test_operator;
	v->a[91974] = sym__brace_start;
	v->a[91975] = ts_builtin_sym_end;
	v->a[91976] = aux_sym_heredoc_redirect_token1;
	v->a[91977] = actions(1316);
	v->a[91978] = 38;
	v->a[91979] = anon_sym_LPAREN_LPAREN;
	small_parse_table_4599(v);
}

void	small_parse_table_4599(t_small_parse_table_array *v)
{
	v->a[91980] = anon_sym_SEMI;
	v->a[91981] = anon_sym_PIPE_PIPE;
	v->a[91982] = anon_sym_AMP_AMP;
	v->a[91983] = anon_sym_PIPE;
	v->a[91984] = anon_sym_AMP;
	v->a[91985] = anon_sym_LT;
	v->a[91986] = anon_sym_GT;
	v->a[91987] = anon_sym_LT_LT;
	v->a[91988] = anon_sym_GT_GT;
	v->a[91989] = anon_sym_SEMI_SEMI;
	v->a[91990] = anon_sym_PIPE_AMP;
	v->a[91991] = anon_sym_AMP_GT;
	v->a[91992] = anon_sym_AMP_GT_GT;
	v->a[91993] = anon_sym_LT_AMP;
	v->a[91994] = anon_sym_GT_AMP;
	v->a[91995] = anon_sym_GT_PIPE;
	v->a[91996] = anon_sym_LT_AMP_DASH;
	v->a[91997] = anon_sym_GT_AMP_DASH;
	v->a[91998] = anon_sym_LT_LT_DASH;
	v->a[91999] = anon_sym_LT_LT_LT;
	small_parse_table_4600(v);
}

/* EOF small_parse_table_919.c */
