/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_479.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2395(t_small_parse_table_array *v)
{
	v->a[47900] = 1;
	v->a[47901] = sym_comment;
	v->a[47902] = actions(900);
	v->a[47903] = 1;
	v->a[47904] = sym_file_descriptor;
	v->a[47905] = actions(1574);
	v->a[47906] = 1;
	v->a[47907] = sym_variable_name;
	v->a[47908] = state(1583);
	v->a[47909] = 2;
	v->a[47910] = sym_variable_assignment;
	v->a[47911] = aux_sym__variable_assignments_repeat1;
	v->a[47912] = state(1559);
	v->a[47913] = 3;
	v->a[47914] = sym_file_redirect;
	v->a[47915] = sym_heredoc_redirect;
	v->a[47916] = aux_sym_redirected_statement_repeat1;
	v->a[47917] = actions(805);
	v->a[47918] = 9;
	v->a[47919] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2396(v);
}

void	small_parse_table_2396(t_small_parse_table_array *v)
{
	v->a[47920] = anon_sym_DOLLAR;
	v->a[47921] = anon_sym_DQUOTE;
	v->a[47922] = sym_raw_string;
	v->a[47923] = sym_number;
	v->a[47924] = anon_sym_DOLLAR_LBRACE;
	v->a[47925] = anon_sym_DOLLAR_LPAREN;
	v->a[47926] = anon_sym_BQUOTE;
	v->a[47927] = sym_word;
	v->a[47928] = actions(807);
	v->a[47929] = 15;
	v->a[47930] = anon_sym_PIPE;
	v->a[47931] = anon_sym_AMP_AMP;
	v->a[47932] = anon_sym_PIPE_PIPE;
	v->a[47933] = anon_sym_LT;
	v->a[47934] = anon_sym_GT;
	v->a[47935] = anon_sym_GT_GT;
	v->a[47936] = anon_sym_AMP_GT;
	v->a[47937] = anon_sym_AMP_GT_GT;
	v->a[47938] = anon_sym_LT_AMP;
	v->a[47939] = anon_sym_GT_AMP;
	small_parse_table_2397(v);
}

void	small_parse_table_2397(t_small_parse_table_array *v)
{
	v->a[47940] = anon_sym_GT_PIPE;
	v->a[47941] = anon_sym_LT_AMP_DASH;
	v->a[47942] = anon_sym_GT_AMP_DASH;
	v->a[47943] = anon_sym_LT_LT;
	v->a[47944] = anon_sym_LT_LT_DASH;
	v->a[47945] = 4;
	v->a[47946] = actions(3);
	v->a[47947] = 1;
	v->a[47948] = sym_comment;
	v->a[47949] = actions(1554);
	v->a[47950] = 2;
	v->a[47951] = anon_sym_esac;
	v->a[47952] = anon_sym_SEMI_SEMI;
	v->a[47953] = actions(1556);
	v->a[47954] = 2;
	v->a[47955] = sym_file_descriptor;
	v->a[47956] = sym_variable_name;
	v->a[47957] = actions(1552);
	v->a[47958] = 27;
	v->a[47959] = anon_sym_for;
	small_parse_table_2398(v);
}

void	small_parse_table_2398(t_small_parse_table_array *v)
{
	v->a[47960] = anon_sym_while;
	v->a[47961] = anon_sym_until;
	v->a[47962] = anon_sym_if;
	v->a[47963] = anon_sym_case;
	v->a[47964] = anon_sym_LPAREN;
	v->a[47965] = anon_sym_LBRACE;
	v->a[47966] = anon_sym_BANG;
	v->a[47967] = anon_sym_LT;
	v->a[47968] = anon_sym_GT;
	v->a[47969] = anon_sym_GT_GT;
	v->a[47970] = anon_sym_AMP_GT;
	v->a[47971] = anon_sym_AMP_GT_GT;
	v->a[47972] = anon_sym_LT_AMP;
	v->a[47973] = anon_sym_GT_AMP;
	v->a[47974] = anon_sym_GT_PIPE;
	v->a[47975] = anon_sym_LT_AMP_DASH;
	v->a[47976] = anon_sym_GT_AMP_DASH;
	v->a[47977] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47978] = anon_sym_DOLLAR;
	v->a[47979] = anon_sym_DQUOTE;
	small_parse_table_2399(v);
}

void	small_parse_table_2399(t_small_parse_table_array *v)
{
	v->a[47980] = sym_raw_string;
	v->a[47981] = sym_number;
	v->a[47982] = anon_sym_DOLLAR_LBRACE;
	v->a[47983] = anon_sym_DOLLAR_LPAREN;
	v->a[47984] = anon_sym_BQUOTE;
	v->a[47985] = sym_word;
	v->a[47986] = 4;
	v->a[47987] = actions(3);
	v->a[47988] = 1;
	v->a[47989] = sym_comment;
	v->a[47990] = actions(1554);
	v->a[47991] = 2;
	v->a[47992] = anon_sym_esac;
	v->a[47993] = anon_sym_SEMI_SEMI;
	v->a[47994] = actions(1556);
	v->a[47995] = 2;
	v->a[47996] = sym_file_descriptor;
	v->a[47997] = sym_variable_name;
	v->a[47998] = actions(1552);
	v->a[47999] = 27;
	small_parse_table_2400(v);
}

/* EOF small_parse_table_479.c */
