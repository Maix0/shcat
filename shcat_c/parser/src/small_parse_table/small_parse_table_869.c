/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_869.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4345(t_small_parse_table_array *v)
{
	v->a[86900] = aux_sym_number_token1;
	v->a[86901] = aux_sym_number_token2;
	v->a[86902] = anon_sym_DOLLAR_LBRACE;
	v->a[86903] = anon_sym_DOLLAR_LPAREN;
	v->a[86904] = anon_sym_BQUOTE;
	v->a[86905] = anon_sym_DOLLAR_BQUOTE;
	v->a[86906] = anon_sym_LT_LPAREN;
	v->a[86907] = anon_sym_GT_LPAREN;
	v->a[86908] = sym_word;
	v->a[86909] = 3;
	v->a[86910] = actions(3);
	v->a[86911] = 1;
	v->a[86912] = sym_comment;
	v->a[86913] = actions(1338);
	v->a[86914] = 5;
	v->a[86915] = sym_file_descriptor;
	v->a[86916] = sym__concat;
	v->a[86917] = sym_test_operator;
	v->a[86918] = sym__brace_start;
	v->a[86919] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4346(v);
}

void	small_parse_table_4346(t_small_parse_table_array *v)
{
	v->a[86920] = actions(1336);
	v->a[86921] = 39;
	v->a[86922] = anon_sym_LPAREN_LPAREN;
	v->a[86923] = anon_sym_SEMI;
	v->a[86924] = anon_sym_PIPE_PIPE;
	v->a[86925] = anon_sym_AMP_AMP;
	v->a[86926] = anon_sym_PIPE;
	v->a[86927] = anon_sym_AMP;
	v->a[86928] = anon_sym_LT;
	v->a[86929] = anon_sym_GT;
	v->a[86930] = anon_sym_LT_LT;
	v->a[86931] = anon_sym_GT_GT;
	v->a[86932] = anon_sym_RPAREN;
	v->a[86933] = anon_sym_SEMI_SEMI;
	v->a[86934] = anon_sym_PIPE_AMP;
	v->a[86935] = anon_sym_AMP_GT;
	v->a[86936] = anon_sym_AMP_GT_GT;
	v->a[86937] = anon_sym_LT_AMP;
	v->a[86938] = anon_sym_GT_AMP;
	v->a[86939] = anon_sym_GT_PIPE;
	small_parse_table_4347(v);
}

void	small_parse_table_4347(t_small_parse_table_array *v)
{
	v->a[86940] = anon_sym_LT_AMP_DASH;
	v->a[86941] = anon_sym_GT_AMP_DASH;
	v->a[86942] = anon_sym_LT_LT_DASH;
	v->a[86943] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86944] = anon_sym_DOLLAR_LBRACK;
	v->a[86945] = aux_sym_concatenation_token1;
	v->a[86946] = anon_sym_DOLLAR;
	v->a[86947] = sym__special_character;
	v->a[86948] = anon_sym_DQUOTE;
	v->a[86949] = sym_raw_string;
	v->a[86950] = sym_ansi_c_string;
	v->a[86951] = aux_sym_number_token1;
	v->a[86952] = aux_sym_number_token2;
	v->a[86953] = anon_sym_DOLLAR_LBRACE;
	v->a[86954] = anon_sym_DOLLAR_LPAREN;
	v->a[86955] = anon_sym_BQUOTE;
	v->a[86956] = anon_sym_DOLLAR_BQUOTE;
	v->a[86957] = anon_sym_LT_LPAREN;
	v->a[86958] = anon_sym_GT_LPAREN;
	v->a[86959] = aux_sym__simple_variable_name_token1;
	small_parse_table_4348(v);
}

void	small_parse_table_4348(t_small_parse_table_array *v)
{
	v->a[86960] = sym_word;
	v->a[86961] = 12;
	v->a[86962] = actions(71);
	v->a[86963] = 1;
	v->a[86964] = sym_comment;
	v->a[86965] = actions(4253);
	v->a[86966] = 1;
	v->a[86967] = anon_sym_PIPE;
	v->a[86968] = actions(4348);
	v->a[86969] = 1;
	v->a[86970] = anon_sym_PIPE_AMP;
	v->a[86971] = actions(5994);
	v->a[86972] = 1;
	v->a[86973] = anon_sym_LT_LT;
	v->a[86974] = actions(5996);
	v->a[86975] = 1;
	v->a[86976] = anon_sym_LT_LT_DASH;
	v->a[86977] = actions(5998);
	v->a[86978] = 1;
	v->a[86979] = sym_variable_name;
	small_parse_table_4349(v);
}

void	small_parse_table_4349(t_small_parse_table_array *v)
{
	v->a[86980] = state(6737);
	v->a[86981] = 1;
	v->a[86982] = sym_subscript;
	v->a[86983] = actions(5992);
	v->a[86984] = 2;
	v->a[86985] = anon_sym_PIPE_PIPE;
	v->a[86986] = anon_sym_AMP_AMP;
	v->a[86987] = state(5360);
	v->a[86988] = 2;
	v->a[86989] = sym_variable_assignment;
	v->a[86990] = aux_sym_variable_assignments_repeat1;
	v->a[86991] = state(5350);
	v->a[86992] = 3;
	v->a[86993] = sym_file_redirect;
	v->a[86994] = sym_heredoc_redirect;
	v->a[86995] = aux_sym_redirected_statement_repeat1;
	v->a[86996] = actions(4247);
	v->a[86997] = 10;
	v->a[86998] = anon_sym_LT;
	v->a[86999] = anon_sym_GT;
	small_parse_table_4350(v);
}

/* EOF small_parse_table_869.c */
