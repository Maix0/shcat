/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_859.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4295(t_small_parse_table_array *v)
{
	v->a[85900] = anon_sym_DOLLAR_LBRACE;
	v->a[85901] = actions(3208);
	v->a[85902] = 1;
	v->a[85903] = anon_sym_DOLLAR_LPAREN;
	v->a[85904] = actions(3210);
	v->a[85905] = 1;
	v->a[85906] = anon_sym_BQUOTE;
	v->a[85907] = actions(3463);
	v->a[85908] = 1;
	v->a[85909] = sym__comment_word;
	v->a[85910] = actions(3465);
	v->a[85911] = 1;
	v->a[85912] = sym__empty_value;
	v->a[85913] = state(1124);
	v->a[85914] = 1;
	v->a[85915] = sym_concatenation;
	v->a[85916] = actions(3461);
	v->a[85917] = 3;
	v->a[85918] = sym_raw_string;
	v->a[85919] = sym_number;
	small_parse_table_4296(v);
}

void	small_parse_table_4296(t_small_parse_table_array *v)
{
	v->a[85920] = sym_word;
	v->a[85921] = state(993);
	v->a[85922] = 5;
	v->a[85923] = sym_arithmetic_expansion;
	v->a[85924] = sym_string;
	v->a[85925] = sym_simple_expansion;
	v->a[85926] = sym_expansion;
	v->a[85927] = sym_command_substitution;
	v->a[85928] = 8;
	v->a[85929] = actions(3);
	v->a[85930] = 1;
	v->a[85931] = sym_comment;
	v->a[85932] = actions(896);
	v->a[85933] = 1;
	v->a[85934] = sym_file_descriptor;
	v->a[85935] = actions(3467);
	v->a[85936] = 1;
	v->a[85937] = aux_sym_heredoc_redirect_token1;
	v->a[85938] = state(2412);
	v->a[85939] = 1;
	small_parse_table_4297(v);
}

void	small_parse_table_4297(t_small_parse_table_array *v)
{
	v->a[85940] = sym__heredoc_expression;
	v->a[85941] = actions(876);
	v->a[85942] = 2;
	v->a[85943] = anon_sym_AMP_AMP;
	v->a[85944] = anon_sym_PIPE_PIPE;
	v->a[85945] = actions(880);
	v->a[85946] = 2;
	v->a[85947] = anon_sym_LT_AMP_DASH;
	v->a[85948] = anon_sym_GT_AMP_DASH;
	v->a[85949] = state(1733);
	v->a[85950] = 2;
	v->a[85951] = sym_file_redirect;
	v->a[85952] = aux_sym_redirected_statement_repeat2;
	v->a[85953] = actions(878);
	v->a[85954] = 8;
	v->a[85955] = anon_sym_LT;
	v->a[85956] = anon_sym_GT;
	v->a[85957] = anon_sym_GT_GT;
	v->a[85958] = anon_sym_AMP_GT;
	v->a[85959] = anon_sym_AMP_GT_GT;
	small_parse_table_4298(v);
}

void	small_parse_table_4298(t_small_parse_table_array *v)
{
	v->a[85960] = anon_sym_LT_AMP;
	v->a[85961] = anon_sym_GT_AMP;
	v->a[85962] = anon_sym_GT_PIPE;
	v->a[85963] = 10;
	v->a[85964] = actions(3);
	v->a[85965] = 1;
	v->a[85966] = sym_comment;
	v->a[85967] = actions(3156);
	v->a[85968] = 1;
	v->a[85969] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85970] = actions(3160);
	v->a[85971] = 1;
	v->a[85972] = anon_sym_DQUOTE;
	v->a[85973] = actions(3162);
	v->a[85974] = 1;
	v->a[85975] = anon_sym_DOLLAR_LBRACE;
	v->a[85976] = actions(3164);
	v->a[85977] = 1;
	v->a[85978] = anon_sym_DOLLAR_LPAREN;
	v->a[85979] = actions(3166);
	small_parse_table_4299(v);
}

void	small_parse_table_4299(t_small_parse_table_array *v)
{
	v->a[85980] = 1;
	v->a[85981] = anon_sym_BQUOTE;
	v->a[85982] = actions(3168);
	v->a[85983] = 1;
	v->a[85984] = sym__bare_dollar;
	v->a[85985] = actions(3469);
	v->a[85986] = 1;
	v->a[85987] = anon_sym_DOLLAR;
	v->a[85988] = actions(3154);
	v->a[85989] = 5;
	v->a[85990] = aux_sym_concatenation_token1;
	v->a[85991] = sym_raw_string;
	v->a[85992] = sym_number;
	v->a[85993] = sym__comment_word;
	v->a[85994] = sym_word;
	v->a[85995] = state(1113);
	v->a[85996] = 5;
	v->a[85997] = sym_arithmetic_expansion;
	v->a[85998] = sym_string;
	v->a[85999] = sym_simple_expansion;
	small_parse_table_4300(v);
}

/* EOF small_parse_table_859.c */
