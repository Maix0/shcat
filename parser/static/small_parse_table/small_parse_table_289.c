/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_289.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1445(t_small_parse_table_array *v)
{
	v->a[28900] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28901] = anon_sym_AMP;
	v->a[28902] = anon_sym_DOLLAR;
	v->a[28903] = sym__special_character;
	v->a[28904] = anon_sym_DQUOTE;
	v->a[28905] = sym_raw_string;
	v->a[28906] = aux_sym_number_token1;
	v->a[28907] = aux_sym_number_token2;
	v->a[28908] = anon_sym_DOLLAR_LBRACE;
	v->a[28909] = anon_sym_DOLLAR_LPAREN;
	v->a[28910] = anon_sym_BQUOTE;
	v->a[28911] = anon_sym_DOLLAR_BQUOTE;
	v->a[28912] = aux_sym__simple_variable_name_token1;
	v->a[28913] = sym_word;
	v->a[28914] = anon_sym_SEMI;
	v->a[28915] = 5;
	v->a[28916] = actions(3);
	v->a[28917] = 1;
	v->a[28918] = sym_comment;
	v->a[28919] = actions(3254);
	small_parse_table_1446(v);
}

void	small_parse_table_1446(t_small_parse_table_array *v)
{
	v->a[28920] = 1;
	v->a[28921] = sym__special_character;
	v->a[28922] = state(627);
	v->a[28923] = 1;
	v->a[28924] = aux_sym__literal_repeat1;
	v->a[28925] = actions(3342);
	v->a[28926] = 5;
	v->a[28927] = sym_file_descriptor;
	v->a[28928] = sym_variable_name;
	v->a[28929] = sym_test_operator;
	v->a[28930] = sym__brace_start;
	v->a[28931] = aux_sym_heredoc_redirect_token1;
	v->a[28932] = actions(3340);
	v->a[28933] = 34;
	v->a[28934] = anon_sym_esac;
	v->a[28935] = anon_sym_PIPE;
	v->a[28936] = anon_sym_SEMI_SEMI;
	v->a[28937] = anon_sym_SEMI_AMP;
	v->a[28938] = anon_sym_SEMI_SEMI_AMP;
	v->a[28939] = anon_sym_PIPE_AMP;
	small_parse_table_1447(v);
}

void	small_parse_table_1447(t_small_parse_table_array *v)
{
	v->a[28940] = anon_sym_AMP_AMP;
	v->a[28941] = anon_sym_PIPE_PIPE;
	v->a[28942] = anon_sym_LT;
	v->a[28943] = anon_sym_GT;
	v->a[28944] = anon_sym_GT_GT;
	v->a[28945] = anon_sym_AMP_GT;
	v->a[28946] = anon_sym_AMP_GT_GT;
	v->a[28947] = anon_sym_LT_AMP;
	v->a[28948] = anon_sym_GT_AMP;
	v->a[28949] = anon_sym_GT_PIPE;
	v->a[28950] = anon_sym_LT_AMP_DASH;
	v->a[28951] = anon_sym_GT_AMP_DASH;
	v->a[28952] = anon_sym_LT_LT;
	v->a[28953] = anon_sym_LT_LT_DASH;
	v->a[28954] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28955] = anon_sym_AMP;
	v->a[28956] = anon_sym_DOLLAR;
	v->a[28957] = anon_sym_DQUOTE;
	v->a[28958] = sym_raw_string;
	v->a[28959] = aux_sym_number_token1;
	small_parse_table_1448(v);
}

void	small_parse_table_1448(t_small_parse_table_array *v)
{
	v->a[28960] = aux_sym_number_token2;
	v->a[28961] = anon_sym_DOLLAR_LBRACE;
	v->a[28962] = anon_sym_DOLLAR_LPAREN;
	v->a[28963] = anon_sym_BQUOTE;
	v->a[28964] = anon_sym_DOLLAR_BQUOTE;
	v->a[28965] = aux_sym__simple_variable_name_token1;
	v->a[28966] = sym_word;
	v->a[28967] = anon_sym_SEMI;
	v->a[28968] = 6;
	v->a[28969] = actions(3);
	v->a[28970] = 1;
	v->a[28971] = sym_comment;
	v->a[28972] = actions(3312);
	v->a[28973] = 1;
	v->a[28974] = aux_sym_concatenation_token1;
	v->a[28975] = actions(3344);
	v->a[28976] = 1;
	v->a[28977] = sym__concat;
	v->a[28978] = state(717);
	v->a[28979] = 1;
	small_parse_table_1449(v);
}

void	small_parse_table_1449(t_small_parse_table_array *v)
{
	v->a[28980] = aux_sym_concatenation_repeat1;
	v->a[28981] = actions(2696);
	v->a[28982] = 6;
	v->a[28983] = sym_file_descriptor;
	v->a[28984] = sym_variable_name;
	v->a[28985] = sym_test_operator;
	v->a[28986] = sym__brace_start;
	v->a[28987] = ts_builtin_sym_end;
	v->a[28988] = aux_sym_heredoc_redirect_token1;
	v->a[28989] = actions(2694);
	v->a[28990] = 32;
	v->a[28991] = anon_sym_PIPE;
	v->a[28992] = anon_sym_SEMI_SEMI;
	v->a[28993] = anon_sym_PIPE_AMP;
	v->a[28994] = anon_sym_AMP_AMP;
	v->a[28995] = anon_sym_PIPE_PIPE;
	v->a[28996] = anon_sym_LT;
	v->a[28997] = anon_sym_GT;
	v->a[28998] = anon_sym_GT_GT;
	v->a[28999] = anon_sym_AMP_GT;
	small_parse_table_1450(v);
}

/* EOF small_parse_table_289.c */
