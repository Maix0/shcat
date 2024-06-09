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
	v->a[91900] = sym_regex;
	v->a[91901] = aux_sym_expansion_regex_token1;
	v->a[91902] = actions(1317);
	v->a[91903] = 4;
	v->a[91904] = anon_sym_RPAREN;
	v->a[91905] = anon_sym_RBRACE;
	v->a[91906] = anon_sym_DQUOTE;
	v->a[91907] = sym_raw_string;
	v->a[91908] = 3;
	v->a[91909] = actions(1313);
	v->a[91910] = 1;
	v->a[91911] = anon_sym_DOLLAR;
	v->a[91912] = actions(1404);
	v->a[91913] = 1;
	v->a[91914] = sym_comment;
	v->a[91915] = actions(1315);
	v->a[91916] = 5;
	v->a[91917] = sym_heredoc_content;
	v->a[91918] = sym_heredoc_end;
	v->a[91919] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4596(v);
}

void	small_parse_table_4596(t_small_parse_table_array *v)
{
	v->a[91920] = anon_sym_DOLLAR_LPAREN;
	v->a[91921] = anon_sym_BQUOTE;
	v->a[91922] = 6;
	v->a[91923] = actions(1404);
	v->a[91924] = 1;
	v->a[91925] = sym_comment;
	v->a[91926] = actions(4176);
	v->a[91927] = 1;
	v->a[91928] = anon_sym_elif;
	v->a[91929] = actions(4178);
	v->a[91930] = 1;
	v->a[91931] = anon_sym_else;
	v->a[91932] = actions(4186);
	v->a[91933] = 1;
	v->a[91934] = anon_sym_fi;
	v->a[91935] = state(2075);
	v->a[91936] = 1;
	v->a[91937] = sym_else_clause;
	v->a[91938] = state(1918);
	v->a[91939] = 2;
	small_parse_table_4597(v);
}

void	small_parse_table_4597(t_small_parse_table_array *v)
{
	v->a[91940] = sym_elif_clause;
	v->a[91941] = aux_sym_if_statement_repeat1;
	v->a[91942] = 6;
	v->a[91943] = actions(1404);
	v->a[91944] = 1;
	v->a[91945] = sym_comment;
	v->a[91946] = actions(4180);
	v->a[91947] = 1;
	v->a[91948] = anon_sym_PIPE;
	v->a[91949] = actions(4188);
	v->a[91950] = 1;
	v->a[91951] = anon_sym_RPAREN;
	v->a[91952] = state(1991);
	v->a[91953] = 1;
	v->a[91954] = aux_sym_concatenation_repeat1;
	v->a[91955] = state(2022);
	v->a[91956] = 1;
	v->a[91957] = aux_sym__case_item_last_repeat1;
	v->a[91958] = actions(4184);
	v->a[91959] = 2;
	small_parse_table_4598(v);
}

void	small_parse_table_4598(t_small_parse_table_array *v)
{
	v->a[91960] = sym__concat;
	v->a[91961] = aux_sym_concatenation_token1;
	v->a[91962] = 6;
	v->a[91963] = actions(1404);
	v->a[91964] = 1;
	v->a[91965] = sym_comment;
	v->a[91966] = actions(4176);
	v->a[91967] = 1;
	v->a[91968] = anon_sym_elif;
	v->a[91969] = actions(4178);
	v->a[91970] = 1;
	v->a[91971] = anon_sym_else;
	v->a[91972] = actions(4190);
	v->a[91973] = 1;
	v->a[91974] = anon_sym_fi;
	v->a[91975] = state(2250);
	v->a[91976] = 1;
	v->a[91977] = sym_else_clause;
	v->a[91978] = state(1918);
	v->a[91979] = 2;
	small_parse_table_4599(v);
}

void	small_parse_table_4599(t_small_parse_table_array *v)
{
	v->a[91980] = sym_elif_clause;
	v->a[91981] = aux_sym_if_statement_repeat1;
	v->a[91982] = 6;
	v->a[91983] = actions(1404);
	v->a[91984] = 1;
	v->a[91985] = sym_comment;
	v->a[91986] = actions(4180);
	v->a[91987] = 1;
	v->a[91988] = anon_sym_PIPE;
	v->a[91989] = actions(4192);
	v->a[91990] = 1;
	v->a[91991] = anon_sym_RPAREN;
	v->a[91992] = state(1991);
	v->a[91993] = 1;
	v->a[91994] = aux_sym_concatenation_repeat1;
	v->a[91995] = state(2006);
	v->a[91996] = 1;
	v->a[91997] = aux_sym__case_item_last_repeat1;
	v->a[91998] = actions(4184);
	v->a[91999] = 2;
	small_parse_table_4600(v);
}

/* EOF small_parse_table_919.c */
